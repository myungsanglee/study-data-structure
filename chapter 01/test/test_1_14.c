// �Է��� ���� �� ������ �ϴ� ���簢���� * ��ȣ��
// ����ϴ� ���α׷��� �ۼ��ϼ���
#include <stdio.h>

int main(void)
{
    int i, j, n;
    do {
        printf("���� ������ �Է��ϼ���: ");
        scanf("%d", &n);
    }while(n <= 0);

    for (i=0; i < n; i++)
    {
        for (j=0; j < n; j++)
        {
            printf("*");
        }
        putchar('\n');
    }
    
    return 0;
}