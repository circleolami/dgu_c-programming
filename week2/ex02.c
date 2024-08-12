#include <stdio.h>

int main() {
    int x, y;
    printf("첫 번째 숫자를 입력하세요: ");
    scanf("%d", &x);
    printf("두 번째 숫자를 입력하세요: ");
    scanf("%d", &y);
    int sum = x + y;
    printf("x와 y의 합: %d\n", sum);
    return 0;
}
