#include <stdio.h>

int main() {
    int a, b, temp;
    printf("�� ���ڸ� �Է��ϼ���: ");
    scanf("%d %d", &a, &b);
    
    temp = a;
    a = b;
    b = temp;
    
    printf("��ȯ ���� ��: a = %d, b = %d\n", a, b);
    return 0;
}
