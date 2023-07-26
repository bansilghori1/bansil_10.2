/*
Q.2 Write a Program to find the length of the String by passing a string as an argument using UDF.For example,
Input:
Enter any string: development

Output:
Length is: 11*/
#include<stdio.h>

length(){

char a[100];

printf("Enter the string : ");
scanf("%s",a);

int b=0;

for(int i=0;a[i]!=0;i++){
b++;
}
printf("The length is : %d ",b);

}
void main(){
    length();
}
