#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int c = 15;
    int max;

    max = (a > b ? (a > c ? a : c) : (b > c ? b : c));

    printf("가장 큰 수: %d\n", max);
    
    return 0;
}
