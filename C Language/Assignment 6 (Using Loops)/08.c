#include<stdio.h>

int main(){
    int n,flag=0;

    printf("Enter a number:-");
    scanf("%d",&n);

   for (int i = 2; i<n/2; i++)
   {
     if (n%i==0)
     {
        flag =1;
        break;
     }
     
   }
  
    if (flag==1)
    {printf("%d is a not a prime number\n",n);
    }
    
    else
        printf("%d a prime number\n",n);
    
     
    return 0;
}

// another methode
/*    for (int i = 2; i<=n/2; i++)
   {
     if (n%i==0)
     {
        count++;
     }
     
   }
   printf("%d\n",count);
    if (count==1)
    {printf("%d is a prime number\n",n);
    }
    
    else
        printf("%d is not a prime number\n",n);*/