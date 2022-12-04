#include<stdio.h>

int main()
{
    int value;
    int get_value;
    scanf("%d", &value);

    if(value%3==0)
    {
        get_value= value/3;
        printf("%d", get_value);
    }
    else
    {
        printf("-1");
    }
    return 0;
}
