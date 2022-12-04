#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char str[60];
    int a,b,i;
    int sum=0,mul=0,total;
    fgets(str, sizeof(str),stdin);
    scanf("%d %d", &a, &b);
    for(i=0; i<=sizeof(str); i++)
    {
        if(str[i]=='+')
        {
            sum=sum+(a+b);

        }

        else if(str[i]=='*')
        {
            mul=mul+(a*b);

        }

    }
    total=sum+mul;
    printf("%d", total);
    return 0;
}
