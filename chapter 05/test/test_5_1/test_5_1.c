/* ���������� ����� ��������� ���Ѵ� (n!) */
#include <stdio.h>

int factorial(int n)
{
    int dst = n;
    while(--n) {
        dst *= n;
    }

    return dst;
}

int main(void)
{
    int x;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &x);
    printf("%d�� �������� ���� %d�Դϴ�.\n", x, factorial(x));

    return 0;
}
