// �Ʒ��� ���� n���� ���� �Ƕ�̵带 
// ����ϴ� �Լ��� �ۼ��ϼ���
// 1111111
//  22222
//   333
//    4
#include <stdio.h>

void nrpira(int n)
{
    int i, j, k;
    for(i=n; i >= 1; i--)
    {
        for(j=1; j<=(n-i+1); j++)
            putchar(' ');
        for(k=1; k<=(2*i - 1); k++)
            printf("%d", (n - i + 1));
        putchar('\n');
    }
}

int main(void)
{
    int n;
    do{
        printf("�� �� �Ƕ�̵� ����?: ");
        scanf("%d", &n);
    } while(n <= 0);

    nrpira(n);

    return 0;
}