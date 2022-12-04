#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i,j,k,n,s;
    scanf("%d",&n);
if(n>=1 && n<=9){
      for(i=1; i<=n; i++)
    {
        printf("%d",i);

    }
    printf("\n");

    for(k=2; k<n; k++)
    {
        printf("%d",k);
        for(s=1; s<=n-2; s++)
            printf(" ");
        printf("%d",n);
        printf("\n");
    }
    for(j=1; j<=n; j++)
    {
        printf("%d", n);
    }

}

    return 0;
}

