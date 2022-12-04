#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,i,sign;
scanf("%d", &n);
char sign[n];

for(i=1;i<=n;i++){
   fgets(sign, sizeof(sign),stdin);
}
printf("%d", sign);
    return 0;
}

