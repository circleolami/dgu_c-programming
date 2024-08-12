#include <stdio.h>

int main() {
    int a, b, temp;
    printf("두 숫자를 입력하세요: ");
    scanf("%d %d", &a, &b);
    
    temp = a;
    a = b;
    b = temp;
    
    printf("교환 후의 값: a = %d, b = %d\n", a, b);
    return 0;
}
