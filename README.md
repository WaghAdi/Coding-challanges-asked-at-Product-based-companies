# Coding-challanges-asked-at-Product-based-companies
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


Question Elaborate/Understanding:
Here in above problem statement we have to take array element input from user and then perform operation to get expected output
In my Code I have given logic or algorithm as follow:
1.Take a integer array for storing and original arry and new array means output array
2.asked user to input how many element want to add.
3. store that user input value in variabel name as n.
4.then take user input valeue on n elemetn and store it in original array.
5.Now traverse Original array using for loop inside that agian traverse all element of  array using one more for loop.//i.e. Nested for loop
6.take product varible and initilize value to 1 inside inner for loop
6.while traversing inner for loop if iterable variabel of inner for loop is equl to currednt value of i(iterable variabel of outer for loop) then skip that one iteration
7.If not equal then multiply element at that position with product varible
8.Outside inner for loop assign product vlaue to Newarray 
8.at end Print new array
