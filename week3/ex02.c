#include <stdio.h>

int main() {
    float num;
    printf("실수를 입력하세요: ");
    scanf("%f", &num);
    printf("입력된 실수에 2를 곱한 값: %.2f\n", num * 2);
    return 0;
}
