
include <stdio.h>
int main()
{
int array[100], search, c, num;
printf("Enter the number of elements in array\n");
scanf("%d",&num);
printf("Enter %d numbers\n", num);
    for ( c = 0 ; c < number ; c++ )
scanf("%d",&array[c]);
printf("Enter the number to search\n");
scanf("%d",&search);
    for ( c = 0 ; c <num ; c++ )
    {
        if ( array[c] == search ) 
        {
printf("%d is present at location %d.\n", search, c+1);
            break;
        }
    }
    if ( c == num )
printf("%d is not present in array.\n", search);
    return 0;
}


