#include <stdio.h>

int main() {
    float radius, area, circumference;
    const float PI = 3.14159;

    printf("���� �������� �Է��ϼ���: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("���� ����: %.2f\n", area);
    printf("���� �ѷ�: %.2f\n", circumference);

    return 0;
}
