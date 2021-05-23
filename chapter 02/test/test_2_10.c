// �迭 a�� ��� ����� ������ �ڼ��� shuffle �Լ��� �ۼ��ϼ���(n�� ��� ����)
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void shuffle(int a[], int n)    
{
    srand(time(NULL));
    int i;

    for (i = n - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);
        if (i != j)
        {
            int tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
        }
    }
}

int main(void)
{
    int * arr_a;
    int num;
    do {
        printf("�迭 ����� ������ ���ϼ���: ");
        scanf("%d", &num);
    } while (num <= 0);

    arr_a = (int *)calloc(num, sizeof(int));

    srand(time(NULL));
    puts("������ ���ڸ� �迭 b�� �ִ´� �� ���� ������ ����");
    int i;
    for (i = 0; i < num; i++)
    {
        arr_a[i] = rand() % 100;
        printf("arr_a[%d]: %d\n", i, arr_a[i]);
    }

    puts("�迭 a�� �ڼ��´�. �� ����� ������ ����");
    shuffle(arr_a, num);
    for (i = 0; i < num; i++)
    {
        printf("arr_a[%d]: %d\n", i, arr_a[i]);
    }

    free(arr_a);

    return 0;
}