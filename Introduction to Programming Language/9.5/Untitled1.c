#include <stdio.h>

int main() {
    int i,k;

  for (k=1;i<=5;k++) {
      for (i=1;i<=5-k;i++){
          printf(" ");
      }
        for (i=1;i<=k;i++){
        printf("* ");
    }
    printf("\n");
  }



    return 0;
}
