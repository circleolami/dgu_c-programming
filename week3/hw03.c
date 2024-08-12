#include <stdio.h>

int main() {
    float radius, area, circumference;
    const float PI = 3.14159;

    printf("원의 반지름을 입력하세요: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("원의 넓이: %.2f\n", area);
    printf("원의 둘레: %.2f\n", circumference);

    return 0;
}
