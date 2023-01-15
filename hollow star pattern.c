#include <stdio.h>
int main()
{
inti, j, N;
printf("Enter number of rows: ");
scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=N; j++)
        {
            if(i==1 || i==N || j==1 || j==N)
            {
printf("*");
            }
            else
            {
printf(" ");
            }
        }
printf("\n");
    }

    return 0;
}


