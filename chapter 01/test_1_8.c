// 1, 2, ..., n 까지의 합을 가우스의 덧셈이라는 방법을 이용하여 구하세요
#include <stdio.h>  

int main(void)
{
    int i, n;
    int sum = 0;
    puts("1부터 n까지의 합을 구합니다.");
    printf("n의 값: ");
    scanf("%d", &n);
    i = 1;
    sum = ((i + n) * n) / 2;

    printf("1부터 %d까지의 합은: %d", n, sum); 

    return 0;
}