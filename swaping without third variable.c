#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter value of A: ");
	scanf("%d", & a);
	printf("Enter value of B: ");
	scanf("%d", & b);
	printf("A = %d, B = %d", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("\nNow, A = %d, B = %d", a, b);
}

