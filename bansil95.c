/*Q.1 Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.
For example,
Input:
Enter array size: 5
Enter array elements:
a[0] = 6
a[1] = 4
a[2] = 1
a[3] = 5
a[4] = 2

Output:
The sum of an Array: 18
*/
#include<stdio.h>

void array(){

int i,sum=0;

printf("Enter the size of array : ");
scanf("%d",&i);

int A[i];
printf("Enter the elements of array : \n");

for(int j=0;j<i;j++){
    printf("a[%d]=",j);
    scanf("%d",&A[j]);
    sum=sum + A[j];
}

printf("\nTHE SUM OF ALL ARRAY'S ELEMETS IS : %d",sum);
} 

void main (){

    array();
}    
