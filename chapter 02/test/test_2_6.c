// �迭�� �� ���ʿ� �Ʒ��ڸ��� �ƴ϶� ���ڸ��� �����ϴ�
// card_conv �Լ��� �ۼ��ϼ���
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
    unsigned num;   // 10���� ��
    char arr[512];  // ��� ��ȯ �� ���� �迭
    int n;          // ����
    puts("10������ ��� ��ȯ�մϴ�");
    do {
        printf("��ȯ�ϴ� ���� �ƴ� ����: ");
        scanf("%d", &num);
    } while (num < 0);
    do {
        printf("� ������ ��ȯ�ұ��?(2-36): ");
        scanf("%d", &n);
    } while (n < 2 || n > 36);
    int digits = card_conv(num, n, arr);
    printf("%d������ ", n);
    int i;
    for (i = 0; i < digits; i++)
    {
        printf("%c", arr[i]);
    }
    puts("�Դϴ�.");

    return 0;
}