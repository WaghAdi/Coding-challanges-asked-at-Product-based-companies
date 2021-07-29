#include<stdio.h>

void main()
{
    int array[100];//array for string original value
    int newArray[100];
    int n,product;
    printf("Enter how many element want to add in an array\n");
    scanf("%d",&n);
    printf("Enter array Element \n");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&array[i]);
    }
    printf("Original Array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t",array[i]);
    }

    for (int i = 0; i < n; i++)
    {   product=1;
        for(int j=0;j<n;j++)
        {
           if (i==j)
           {
               continue;
           }
           else
           {
                product=product*array[j];
           }
           
        }
        newArray[i]=product;
    }
    printf("\n");
    printf("New Array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t",newArray[i]);
    }
    
    
}