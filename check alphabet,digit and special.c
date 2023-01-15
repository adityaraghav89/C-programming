#include<stdio.h>
int main()
{
	char ch;
	printf("enter character :");
	scanf("%c",&ch);
	 if(ch>=65 &&ch<=90 || ch>=97 &&ch<=122)
	  {
		printf("character is alphabet");
     	}
	   else if(ch>=48 &&ch<=57)
		printf("character is number");
	    else
		printf("special character");
}

