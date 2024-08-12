#include <stdio.h>

int main() {
    int a, b;
    printf("첫 번째 숫자를 입력하세요: ");
    scanf("%d", &a);
    printf("두 번째 숫자를 입력하세요: ");
    scanf("%d", &b);
    int difference = a - b;
    printf("a와 b의 차: %d\n", difference);
    return 0;
}
