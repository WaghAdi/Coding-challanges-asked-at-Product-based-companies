/*Question:
given an array of integers,return a new array such that each element at index i of a new array is the product of all number in original array except at one at i.

For Example:
Test Case 1:
            Input array=[1,2,3,4,5]
            Expected Output=[120,60,40,30,24]


Test Case 2:
            Input array=[3,2,1]
            Expected Output=[2,3,6]
*/




#include<stdio.h>

void main()
{
    int array[100];//array for string original value
    int newArray[100]; //array for storing output value
    int n,product;
    printf("Enter how many element want to add in an array\n");
    scanf("%d",&n);

    //taking user input value in given array
    printf("Enter array Element \n");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&array[i]);
    }
    //printing given array i.e original array
    printf("Original Array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t",array[i]);
    }

    //Logic for accepted output

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

    //printing new array
    printf("\n");
    printf("New Array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t",newArray[i]);
    }
    
    
}