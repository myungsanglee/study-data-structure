// �Ʒ��� ���� �� ���� a, b�� ������ �Է��ϰ� b - a�� ����ϴ� ���α׷��� �ۼ��ϼ���
// a�� ��: 6
// b�� ��: 6
// a���� ū ���� �Է��ϼ���!
// b�� ��: 8
// b - a�� 2�Դϴ�.
#include <stdio.h>

int main(void)
{
    int a, b;
    printf("a�� ��: ");
    scanf("%d", &a);
    while(1)
    {
        printf("b�� ��: ");
        scanf("%d", &b);
        if (b <= a)
            printf("a���� ū ���� �Է��ϼ���!\n");
        else
            break;
    }

    printf("b - a�� %d�Դϴ�.\n", b - a);

    return 0;
}