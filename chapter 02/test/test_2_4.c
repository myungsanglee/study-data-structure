// Ű�� �ִ��� ���ϴ� ���α׷��� �ۼ��ϼ���
// �� ��� ���� Ű ��� ������ �����ϼ���
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int sumof(const int a[], int n)
{
    int i;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    
    return sum;
}

int main(void)
{
    int i;
    int * height;
    srand(time(NULL));
    int num = 5 + rand() % 16;
    printf("��� ���� %d���Դϴ�.\n", num);
    height = (int *)calloc(num, sizeof(int));
    printf("Ű ���� �ڵ����� �����˴ϴ�\n");
    for (i = 0; i < num; i++)
    {
        height[i] = 100 + rand() % 90;
        printf("height[%d]: %d\n", i, height[i]);
    }
    printf("Ű�� �հ�� %d �Դϴ�.", sumof(height, num));

    return 0;
}