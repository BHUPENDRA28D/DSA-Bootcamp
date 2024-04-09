#include "ArrayADT.cpp"
class ExtendedArray:public Array
{
    public:
        ExtendedArray(int);
        int greatest();
        int smallest();
        int search(int);
        void sort();
        int sum();
        float average();
        void rotateRightByOne();
        void removeDuplicate();
        void printArray();
        int secondLargest();
        void swapItems(int,int);
};
ExtendedArray::ExtendedArray(int cap):Array(cap){ }
void ExtendedArray::swapItems(int i,int j)
{
    int temp;
    if(i>=0&&i<count()&&j<count()&&j>=0)
    {
        temp=get(i);
        edit(i,get(j));
        edit(j,temp);
    }
}
int ExtendedArray::secondLargest()
{
    int r, temp, i;
    if(count()>=2)
        for(r=1;r<=2;r++)
        {
            for(i=0;i<=count()-1-r;i++)
            {
                if(get(i)>get(i+1))
                {
                    temp=get(i);
                    edit(i,get(i+1));
                    edit(i+1,temp);
                }
            }
        }
    return count()-2;
}
void ExtendedArray::printArray()
{
    for(int i=0;i<count();i++)
        cout<<" "<<get(i);
}
void ExtendedArray::removeDuplicate()
{
    for(int i=0;i<count();i++)
    {
        for(int j=i+1;j<count();j++)
        {
            if(get(i)==get(j))
            {
                del(j);
                j--;
            }
        }
    }
}
void ExtendedArray::rotateRightByOne()
{
    int temp;
    int lastIndex;
    if(!isEmpty())
    {
        lastIndex=count()-1;
        temp=get(lastIndex);
        for(int i=lastIndex;i>0 ;i--)
            edit(i,get(i-1));
        edit(0,temp);
    }
}
float ExtendedArray::average()
{
    return (float)sum()/count();
}
int ExtendedArray::sum()
{
    int s=0;
    for(int i=0;i<count();i++)
        s=s+get(i);
    return s;
}
int ExtendedArray::search(int data)
{
    for(int i=0;i<count();i++)
        if(get(i)==data)
            return i;
    return -1;
}
void ExtendedArray::sort()
{
    int r, temp, i;
    for(r=1;r<=count()-1;r++)
    {
        for(i=0;i<=count()-1-r;i++)
        {
            if(get(i)>get(i+1))
            {
                temp=get(i);
                edit(i,get(i+1));
                edit(i+1,temp);
            }
        }
    }
}
int ExtendedArray::smallest()
{
    int min;
    if(isEmpty())
    {
        cout<<"\nArray is empty";
        return -1;
    }
    min=get(0);
    for(int i=1;i<count();i++)
        if(min>get(i))
            min=get(i);
    return min;
}
int ExtendedArray::greatest()
{
    int max;
    if(isEmpty())
    {
        cout<<"\nArray is empty";
        return -1;
    }
    max=get(0);
    for(int i=1;i<count();i++)
        if(max<get(i))
            max=get(i);
    return max;
}