// �Է��� ���̿� �ʺ� �´� ���簢���� 
// * ��ȣ�� ����ϴ� ���α׷��� �ۼ��ϼ���
#include <stdio.h>

int main(void)
{
    int height, width;
    do {
        printf("����: ");
        scanf("%d", &height);
    } while(height <= 0);

    do {
        printf("�ʺ�: ");
        scanf("%d", &width);
    } while(width <= 0);

    int i, j;
    for (i=0; i < height; i++)
    {
        for (j=0; j < width; j++)
        {
            printf("*");
        }
        putchar('\n');
    }

    return 0;
}