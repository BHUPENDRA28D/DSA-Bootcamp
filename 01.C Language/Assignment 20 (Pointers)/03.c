#include<stdio.h>
//Function to sort the numbers using pointers
void sort(int* ptr , int n)
{
    int i, j, t;
 
    // Sort the numbers using pointers
    for (i = 0; i < n; i++) {
 
        for (j = i + 1; j < n; j++) {
 
            if (*(ptr + j) < *(ptr + i)) {
 
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
 
    // print the numbers
    for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
}


// Get input 
 void input(int *p,int size){
    for (int i = 0; i < size; i++){
    printf("Element %d :: ",i);
    scanf("%d",(p+i));}
}

// Driver code
int main()
{
    int n = 5;
    int arr[n]; 
    input(arr, n);
    sort(arr,n);
 
    return 0;
}