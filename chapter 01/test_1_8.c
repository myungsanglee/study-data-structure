// 1, 2, ..., n ������ ���� ���콺�� �����̶�� ����� �̿��Ͽ� ���ϼ���
#include <stdio.h>  

int main(void)
{
    int i, n;
    int sum = 0;
    puts("1���� n������ ���� ���մϴ�.");
    printf("n�� ��: ");
    scanf("%d", &n);
    i = 1;
    sum = ((i + n) * n) / 2;

    printf("1���� %d������ ����: %d", n, sum); 

    return 0;
}