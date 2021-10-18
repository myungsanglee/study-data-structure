/* 유클리드 호제법에 의해 최대공약수를 구한다 */
#include <stdio.h>

/* 정수 x, y의 최대공약수를 반환 */
int gcd(int x, int y)
{
    int dst;
    int tmp;
    while (1) {
        tmp = x % y;
        if (tmp) {
            x = y;
            y = tmp;
        }
        else {
            dst = y;
            break;
        }
    }

    return dst;
}

int main(void)
{
    int x, y;
    printf("두 정수의 최대공약수를 구합니다.\n");
    printf("정수를 입력하세요: ");
    scanf("%d", &x);
    printf("정수를 입력하세요: ");
    scanf("%d", &y);
    printf("최대공약수는 %d입니다.\n", gcd(x, y));

    return 0;
}