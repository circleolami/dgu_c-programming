#include <stdio.h>

int main() {
    int principal, months;
    float rate, final_amount;
    
    printf("������ �Է��ϼ���: ");
    scanf("%d", &principal);
    
    printf("�Ⱓ(����)�� �Է��ϼ���: ");
    scanf("%d", &months);
    
    printf("�������� �Է��ϼ��� (�Ҽ��� ���·�): ");
    scanf("%f", &rate);
    
    final_amount = principal + (principal * rate * months);
    
    printf("���� ���� �ݾ�: %.2f\n", final_amount);
    return 0;
}
