#include <stdio.h>

int main() {
    int num, i, result = 1;
     printf("input number: ");
     scanf("%d", &num);

    for(i = 2; i <= num; i++) {
        result = result * i;
    }
    
    printf("Factorial: %d\n", result);
    return 0;
}
