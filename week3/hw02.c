#include <stdio.h>

int main() {
    float num1, num2, num3, average;
    printf("�� ���� �Ǽ��� �Է��ϼ���: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    average = (num1 + num2 + num3) / 3.0;
    printf("�Էµ� �� �Ǽ��� ���: %.2f\n", average);
    return 0;
}
