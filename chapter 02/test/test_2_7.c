// 기수 변환 과정을 출력하는 프로그램을 작성하세요
#include <stdio.h>
#include <stdlib.h>

int card_conv(unsigned x, int n, char d[])
{
    char nd[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int digits = 0;
    if (x == 0)
    {
        d[digits++] = nd[0];
    }
    else
    {
        while (x)
        {
            printf("%2d|%10d ... %d\n", n, x, x % n);
            printf("  +----------\n");
            d[digits++] = nd[x % n];
            x /= n;
        }
    }
    printf("   %10d\n", 0);
    
    int i;
    for (i = 0; i < digits/2; i++)
    {
        char tmp = d[i];
        d[i] = d[digits - i - 1];
        d[digits - i - 1] = tmp;
    }

    return digits;
}

int main(void)
{
    unsigned num;   // 10진수 값
    char arr[512];  // 기수 변환 값 저장 배열
    int n;          // 진수
    int retry;
    do {
        puts("10진수를 기수 변환합니다");
        do {
            printf("변환하는 음이 아닌 정수: ");
            scanf("%d", &num);
        } while (num < 0);
        do {
            printf("어떤 진수로 변환할까요?(2-36): ");
            scanf("%d", &n);
        } while (n < 2 || n > 36);
        int digits = card_conv(num, n, arr);
        printf("%d진수로 ", n);
        int i;
        for (i = 0; i < digits; i++)
        {
            printf("%c", arr[i]);
        }
        puts("입니다.");

        printf("한 번 더 할까요?(1 ... 예/0 ... 아니오): ");
        scanf("%d", &retry);
    } while(retry);
    
    return 0;
}