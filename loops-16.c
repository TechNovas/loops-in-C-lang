#include <stdio.h>

int main() {
    int array[10];
    int i;

    printf("Input 10 elements in the array :\n");
    for(i = 0; i < 10; i++) {
        printf("element - %d : ", i);
        scanf("%d", &array[i]);
    }

    printf("Elements in array are: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
