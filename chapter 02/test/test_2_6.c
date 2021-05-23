// 배열의 맨 앞쪽에 아랫자리가 아니라 윗자리를 저장하는
// card_conv 함수를 작성하세요
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
            d[digits++] = nd[x % n];
            x /= n;
        }
    }

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

    return 0;
}