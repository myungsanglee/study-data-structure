// n�� 7�̸� '1+2+3+4+5+6+7=28'�� ����ϴ� ���α׷��� �ۼ��ϼ���
#include <stdio.h>  

int main(void)
{
    int i, n;
    int sum = 0;
    puts("1���� n������ ���� ���մϴ�.");
    printf("n�� ��: ");
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