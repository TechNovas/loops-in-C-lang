#include <stdio.h>

int main() {
     int num, i, j;
     printf("Input number: ");
     scanf("%d", &num);
     for(i=1; i<=10; i++) {
        for(j=1; j<=num; j++) {
            printf("%dX%d = %d ",i, j, i*j);
        }
        printf("\n");
     }
     printf("\n");
        return 0;
}