#include <stdio.h>

int main() {
    int num;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);
    printf("입력된 정수의 16진수 표현: %x\n", num);
    return 0;
}
