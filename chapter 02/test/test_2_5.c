// �迭 ��Ҹ� �������� �����ϴ� ������ ������ ����ϵ��� �ۼ��ϼ���
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ary_reverse(int a[], int n)
{
    int i, j;
    for (i = 0; i < n / 2; i++)
    {
        printf("a[%d]�� a[%d]�� ��ȯ�մϴ�.\n", i, n - i -1);
        int tmp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = tmp;
        for (j=0; j < n; j++)
        {
            printf("%d ", a[j]);
        }
        printf("\n");
    }
}

int main(void)
{
    int num, i;
    int *arr;
    do {
        printf("�迭 ��� ������ ���ϼ���: ");
        scanf("%d", &num);
    } while(num <= 0);
    arr = (int *)calloc(num, sizeof(int));
    srand(time(NULL));
    for (i = 0; i < num; i++)
    {
        arr[i] = rand() % 10;
    }
    puts("�迭 ���� ���� ����");
    for (i = 0; i < num; i++) printf("%d ", arr[i]);
    puts("");
    ary_reverse(arr, num);
    puts("�迭 ���� ���� ����");

    return 0;
}