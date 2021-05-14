// ���� �̵ �ﰢ���� ����ϴ� �κ��� �Ʒ��� ����
// ������ �Լ��� �ۼ��ϼ���
#include <stdio.h>

void triangleLB(int n);
void triangleLU(int n);
void triangleRU(int n);
void triangleRB(int n);

int main(void)
{
    int n;
    do{
        printf("�� �� �ﰢ���Դϱ�?: ");
        scanf("%d", &n);
    } while(n <= 0);

    triangleLB(n);
    triangleLU(n);
    triangleRU(n);
    triangleRB(n);

    return 0;
}

void triangleLB(int n)
{
    int i, j;
    for(i=1; i <= n; i++)
    {
        for(j=1; j <= i; j++)
            putchar('*');
        putchar('\n');
    }
}

void triangleLU(int n)
{
    int i, j;
    for(i=1; i <= n; i++)
    {
        for(j=n; j >= i; j--)
            putchar('*');
        putchar('\n');
    }
}

void triangleRU(int n)
{
    int i, j, k;
    for(i=1; i <= n; i++)
    {
        for(k=0; k<(i-1); k++)
            putchar(' ');
        for(j=n; j >= i; j--)
            putchar('*');
        putchar('\n');
    }
}

void triangleRB(int n)
{
    int i, j, k;
    for(i=1; i <= n; i++)
    {
        for(k=1; k <= (n-i); k++)
            putchar(' ');
        for(j=1; j <= i; j++)
            putchar('*');
        putchar('\n');
    }
}