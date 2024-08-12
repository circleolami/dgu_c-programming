#include <stdio.h>

int main() {
    int principal, months;
    float rate, final_amount;
    
    printf("원금을 입력하세요: ");
    scanf("%d", &principal);
    
    printf("기간(개월)을 입력하세요: ");
    scanf("%d", &months);
    
    printf("이자율을 입력하세요 (소수점 형태로): ");
    scanf("%f", &rate);
    
    final_amount = principal + (principal * rate * months);
    
    printf("최종 저축 금액: %.2f\n", final_amount);
    return 0;
}
