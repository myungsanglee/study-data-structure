// Ű�� �ּڰ��� ���ϴ� ���α׷��� �ۼ��ϼ���
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int minof(const int a[], int n)
{
    int i;
    int min = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] < min) min = a[i];
    }
    return min;
}

int main(void)
{
    int i;
    int * height;
    int num;
    srand(time(NULL));
    do {
        printf("��� ������ ���ϼ���: ");
        scanf("%d", &num);
    } while(num <= 0);
    height = (int *)calloc(num, sizeof(int));
    printf("Ű ���� �ڵ����� �����˴ϴ�\n");
    for (i = 0; i < num; i++)
    {
        height[i] = 100 + rand() % 90;
        printf("height[%d]: %d\n", i, height[i]);
    }
    printf("Ű�� �ּڰ��� %d �Դϴ�.", minof(height, num));

    return 0;
}