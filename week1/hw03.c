#include <stdio.h>

int main() {
    int height = 4;
    int i, j;

    for (i = 1; i <= height; i++) {
        for (j = 1; j <= height - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
