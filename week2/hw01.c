#include <stdio.h>

int main() {
    int a, b;
    printf("�� ���ڸ� �Է��ϼ���: ");
    scanf("%d %d", &a, &b);
    printf("����: %d\n", a + b);
    printf("����: %d\n", a - b);
    printf("����: %d\n", a * b);
    if (b != 0) {
        printf("������: %d\n", a / b);
    } else {
        printf("������: ���� �� �����ϴ�.\n");
    }
    return 0;
}
