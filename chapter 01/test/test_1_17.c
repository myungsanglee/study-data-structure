// n단의 피라미드를 출력하는 함수를 작성하세요
#include <stdio.h>

void spira(int n);

int main(void)
{
    int n;
    do {
        printf("몇 단 피라미드 생성?: ");
        scanf("%d", &n);
    } while(n <= 0);

    spira(n);

    return 0;
}

void spira(int n)
{
    int i, j, k;
    for(i=1; i<=n; i++)
    {
        for(k=1; k <= (n-i); k++)
            putchar(' ');

        for(j=1; j<=(2*i - 1); j++)
            putchar('*');

        putchar('\n');
    }
}