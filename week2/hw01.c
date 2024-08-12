#include <stdio.h>

int main() {
    int a, b;
    printf("µÎ ¼ýÀÚ¸¦ ÀÔ·ÂÇÏ¼¼¿ä: ");
    scanf("%d %d", &a, &b);
    printf("µ¡¼À: %d\n", a + b);
    printf("»¬¼À: %d\n", a - b);
    printf("°ö¼À: %d\n", a * b);
    if (b != 0) {
        printf("³ª´°¼À: %d\n", a / b);
    } else {
        printf("³ª´°¼À: ³ª´­ ¼ö ¾ø½À´Ï´Ù.\n");
    }
    return 0;
}
