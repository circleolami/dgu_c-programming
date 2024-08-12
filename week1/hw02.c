#include <stdio.h>

int main() {
    int num = 7;

    if (num % 2 == 0) {
        printf("%d은(는) 짝수입니다.\n", num);
    } else {
        printf("%d은(는) 홀수입니다.\n", num);
    }
    
    return 0;
}
