#include <stdio.h>
void swap(int * num1, int * num2);
int main()
{
int num1, num2;
printf("Enter two numbers: ");
scanf("%d%d", &num1, &num2);
printf("Before swapping in main n");
printf("Value of num1 = %d \n", num1);
printf("Value of num2 = %d \n\n", num2);
    swap(&num1, &num2);
printf("After swapping in main n");
printf("Value of num1 = %d \n", num1);
printf("Value of num2 = %d \n\n", num2);
    return 0;
}
void swap(int * num1, int * num2)
{
int temp;
    temp = *num1;
    *num1= *num2;
    *num2= temp;

printf("After swapping in swap function n");
printf("Value of num1 = %d \n", *num1);
printf("Value of num2 = %d \n\n", *num2);
}


Call by value(time need go read)

#include<stdio.h>
void swap(int,int);        
void main( )
{
int n1,n2;
printf("Enter the two numbers to be swapped\n");
scanf("%d%d",&n1,&n2);
printf("\nThe values of n1 and n2 in the main function before calling the swap function are n1=%d n2=%d",n1,n2);
    swap(n1,n2);                                          
printf("\nThe values of n1 and n2 in the main function after calling the swap function are n1=%d n2=%d",n1,n2);}
void swap(int n1,int n2)                           
{ 
int temp;
    temp=n1;
    n1=n2;
    n2=temp;
printf("\nThe values of n1 and n2 in the swap function after swapping are n1=%d n2=%d",n1,n2);
}



