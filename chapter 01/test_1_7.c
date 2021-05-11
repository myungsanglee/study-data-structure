// n이 7이면 '1+2+3+4+5+6+7=28'로 출력하는 프로그램을 작성하세요
#include <stdio.h>  

int main(void)
{
    int i, n;
    int sum = 0;
    puts("1부터 n까지의 합을 구합니다.");
    printf("n의 값: ");
    scanf("%d", &n);

    for(i=1; i <= n; i++)
    {
        sum += i;
        printf("%d", i);
        if(i == n)
            printf("=%d", sum);
        else    
            printf("+");
    }

    return 0;
}