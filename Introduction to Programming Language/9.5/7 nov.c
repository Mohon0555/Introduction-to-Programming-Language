#include<stdio.h>
int main()
{
    int i,j,k;
    for (i=1; j<=5; i++)
    {
        printf("\n");
        for(j=1; i=5-j; j++)
        {
            printf("_");
        }

        for(j=1; i<=j; j++)
        {
            printf("*");
        }
    }
    return 0;
}


