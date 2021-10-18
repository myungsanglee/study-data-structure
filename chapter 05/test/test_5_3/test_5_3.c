/* ��Ŭ���� ȣ������ ���� �ִ������� ���Ѵ� */
#include <stdio.h>
#include <stdlib.h>

/* ���� x, y�� �ִ������� ��ȯ */
int gcd(int x, int y)
{
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
}

int gcd_array(const int a[], int n)
{
    if (n == 1) 
        return a[0];
    else if (n == 2) 
        return gcd(a[0], a[1]);
    else 
        return gcd(a[0], gcd_array(&a[1], n - 1));
}

int main(void)
{
    int i, num;
    int *x;

    printf("�迭 ����� ������ �Է��ϼ���: ");
    scanf("%d", &num);

    x = (int *)calloc(num, sizeof(int));
    for (i = 0; i < num; i++) {
        printf("������ �Է��ϼ���: ");
        scanf("%d", &x[i]);
    }

    printf("�迭�� �ִ������� %d�Դϴ�.\n", gcd_array(x, num));

    return 0;
}