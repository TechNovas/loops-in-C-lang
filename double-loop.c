#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i < 5; i++) {
        // 5 times
        for (j = 0; j < 3; j++) {
            // 3 times
            // 5 * 3 = 15 times
            printf("i is %d and j is %d\n", i, j);
        }
    }
}
