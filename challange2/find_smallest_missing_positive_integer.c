/* Problem Statement : given an integer array,find missing positive integer in linear time and constant
                       space in other words,find the lowest positive integer that does not exit in the array.
                        The array cna contain duplicate and negative numbersas well.

  
For example

Test Case 1:
input array=[3,4,-1,1]
Expected output: Lowest missing positive integer is 2



Test Case 2:
input array=[1,2,0]
Expected output: Lowest missing positive integer is 3

*/

#include <stdio.h>
void main()
{
    int a[100]; //array for storing element
    int n, flag;
    int positiveInterger = 1;
    printf("Enter how many element want to add\n");
    scanf("%d",&n);

    // for taking user input array elements
    printf("Enter array element\n");
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

     // for printing user input array elements

    printf("array element are\n");
    for (int  i = 0; i < n; i++)
    {
        printf("%d \t",a[i]);
    }
    printf("\n");
    
//logic for finding smallest Missing positive integer from given array


label:
    flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == positiveInterger)
        {
            positiveInterger++;
            flag = 1;
            break;
        }
        
    }
    if (flag == 1)
    {
        goto label;
    }
    else
    {
        printf("Lowest Missing positive integer is %d", positiveInterger);
    }
}