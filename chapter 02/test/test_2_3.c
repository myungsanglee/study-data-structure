// Ű�� ����� ���ϴ� ���α׷��� �ۼ��ϼ���
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

double aveof(const int a[], int n)
{
    int i;
    double avg;
    double sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += (double)a[i];
    }
    avg = (sum / (double)n);
    
    return avg;
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
    printf("Ű�� ����� %.2f �Դϴ�.", aveof(height, num));

    return 0;
}