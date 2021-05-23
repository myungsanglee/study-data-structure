// �迭 b�� ��� ��Ҹ� �迭 a�� �����ϴ� �Լ��� �ۼ��ϼ���(n�� ��� �����Դϴ�.)
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void ary_copy(int a[], const int b[], int n)    
{
    int i;
    for (i = 0; i < n; i++)
    {
        a[i] = b[i];
    }
}

int main(void)
{
    int * arr_a;
    int * arr_b;
    int num;
    do {
        printf("�迭 ����� ������ ���ϼ���: ");
        scanf("%d", &num);
    } while (num <= 0);

    arr_a = (int *)calloc(num, sizeof(int));
    arr_b = (int *)calloc(num, sizeof(int));

    srand(time(NULL));
    puts("������ ���ڸ� �迭 b�� �ִ´� �� ���� ������ ����");
    int i;
    for (i = 0; i < num; i++)
    {
        arr_b[i] = rand() % 100;
        printf("arr_b[%d]: %d\n", i, arr_b[i]);
    }

    puts("�迭 b�� a�� �����Ѵ� �迭 a�� ������ ����");
    ary_copy(arr_a, arr_b, num);
    for (i = 0; i < num; i++)
    {
        printf("arr_a[%d]: %d\n", i, arr_a[i]);
    }

    return 0;
}