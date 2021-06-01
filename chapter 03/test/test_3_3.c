#include <stdio.h>
#include <stdlib.h> 

int search_idx(const int a[], int n, int key, int idx[])
{
    int num = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            idx[num] = i;
            num++;
        }
    }
    
    return num;
}

int main(void)
{
    int i, n, key;
    int *arr;
    int *arr_idx;
    printf("��� ����: ");
    scanf("%d", &n);
    arr = (int *)calloc(n, sizeof(int));
    arr_idx = (int *)calloc(n, sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Key: ");
    scanf("%d", &key);

    int num = search_idx(arr, n, key, arr_idx);
    if (num != 0)
    {
        printf("��ġ�� ����� ����: %d\n", num);
        printf("��ġ�� ��� �ε���\n");
        for (i = 0; i < num; i++)
        {
            printf("arr_idx[%d]: %d\n", i, arr_idx[i]);
        }
    }
    else 
        printf("��ġ�� ��Ұ� ����\n");
        
    return 0;
}