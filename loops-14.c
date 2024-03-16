#include <stdio.h>
#include <stdbool.h>

void main(){
    int num, i, j;
    printf("input number: ");
    scanf("%d", &num);
    for(i = 1; i <= num; i++) {
        for(j = 1; j < i+1; j++) {
            if (i % 2 == 0) { // Even
                printf("%d", (j + 1) % 2); // Lines 2, 4, 6
            } else {
                printf("%d", j % 2); // Lines 1, 3, 5...
            }
        }
        printf("\n");
    }
}