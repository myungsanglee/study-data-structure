/* ��Ŭ���� ȣ������ ���� �ִ������� ���Ѵ� */
#include <stdio.h>

/* ���� x, y�� �ִ������� ��ȯ */
int gcd(int x, int y)
{
    int dst;
    int tmp;
    while (1) {
        tmp = x % y;
        if (tmp) {
            x = y;
            y = tmp;
        }
        else {
            dst = y;
            break;
        }
    }

    return dst;
}

int main(void)
{
    int x, y;
    printf("�� ������ �ִ������� ���մϴ�.\n");
    printf("������ �Է��ϼ���: ");
    scanf("%d", &x);
    printf("������ �Է��ϼ���: ");
    scanf("%d", &y);
    printf("�ִ������� %d�Դϴ�.\n", gcd(x, y));

    return 0;
}