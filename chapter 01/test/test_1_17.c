// n���� �Ƕ�̵带 ����ϴ� �Լ��� �ۼ��ϼ���
#include <stdio.h>

void spira(int n);

int main(void)
{
    int n;
    do {
        printf("�� �� �Ƕ�̵� ����?: ");
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