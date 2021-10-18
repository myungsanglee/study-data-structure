/* 순차곱셈의 결과를 재귀적으로 구한다 (n!) */
#include <stdio.h>

int factorial(int n)
{
    int dst = n;
    while(--n) {
        dst *= n;
    }

    return dst;
}

int main(void)
{
    int x;
    printf("정수를 입력하세요: ");
    scanf("%d", &x);
    printf("%d의 순차곱셈 값은 %d입니다.\n", x, factorial(x));

    return 0;
}
