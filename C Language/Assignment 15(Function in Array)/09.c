// This is incomplete
#include <stdio.h>
int main()
{
    int n1,n2,n3;            //Array Size Declaration
    int a[10000], b[10000], c[20000];
    printf("Enter the size of first array: ");
    scanf("%d",&n1);
    printf("Enter the array elements: ");
    for(int i = 0; i < n1; i++)      
       scanf("%d", &a[i]);
    printf("Enter the size of second array: ");
    scanf("%d",&n2);
    printf("Enter the array elements: ");
    for(int i = 0; i < n2; i++)      
       scanf("%d", &b[i]);
    n3 = n1 + n2;
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)    //this loop will run till a or b is completely traversed
    {
        if (a[i] < b[j])
            c[k++] = a[i++];    //here, as soon as we copy an element in c, we increment the iterator so that the next element is copied at next index. 
//When we copy an element from a to c, we increment i also because now we will compare with the next element of a.
        else
            c[k++] = b[j++];
    }
  
    while (i < n1)    //copying the leftover elements of a, if any
        c[k++] = a[i++];
  
    while (j < n2)    //copying the leftover elements of b, if any
        c[k++] = b[j++];
    
    printf("Final array after merging: ");
    for(int i = 0; i < n3 ; i++)       //Print the sorted Array 
        printf(" %d ",c[i]);
    return 0;   
}





// #include<stdio.h>
// void merge_sort(int a[],int x,int b[],int y,int c[]){
//      int i = 0, j = 0, k = 0;

//     while (i < x && j < y)    //this loop will run till a or b is completely traversed
//     {
//         if (a[i] < b[j])
//             c[k++] = a[i++];    //here, as soon as we copy an element in c, we increment the iterator so that the next element is copied at next index. 
// //When we copy an element from a to c, we increment i also because now we will compare with the next element of a.
//         else
//             c[k++] = b[j++];
//     }
  
//     while (i < x)    //copying the leftover elements of a, if any
//         c[k++] = a[i++];
  
//     while (j < y)    //copying the leftover elements of b, if any
//         c[k++] = b[j++];
       
// }

// int main(){
// int a[3]={10,20,3},  b[3]={2,11,18},c[6],i=0;
// merge_sort(a,3,b,3,c);
// printf("----------Merged and Sorted Array-----------\n");

// while(i<6){
// printf(" %d",c[i]);
// i++;}
// return 0;
// }

// int main(){
//     int a[3]={10,20,3},  b[3]={2,11,18},c[6];
//     int k=0,i=0,j=0;
//     for(int k=0;k<6;k++){
        
//         if(k<3){
//             c[k]=a[i];
//             i++;
//         }
//         else if(k>=3){
//             c[k]=b[j];
//             j++;
//         }


//     }
//     // First merge array and then sort..
//     int temp;
//     for(i=0;i<6;i++){
//         for(j=i+1;j<6;j++){
//             if(c[i]<c[j]){
//                 temp = c[i];
//                 c[i] = c[j];
//                 c[j]= temp;
//             }
//         }
//     }
//     printf("\n______Merge and Sorted Array_________\n");

//     for(k=0;k<6;k++){
//         printf(" %d",c[k]);
//     }

//     return 0;
// }