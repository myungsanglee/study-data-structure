#include <stdio.h>
#include <stdlib.h> 

// ����� ������ n�� �迭 a���� key�� ��ġ�ϴ� ��Ҹ� ���� �˻�
int bin_search(const int a[], int n, int key)
{
    int left_index = 0;
    int right_index = n - 1;
    int i;
    while (left_index <= right_index)
    {
        
        int center_index = (left_index + right_index) / 2;

        printf("   |");
        for (i=0; i<n; i++)
        {
            if (left_index == i && left_index != center_index) printf("%3s", "<-");
            else if (right_index == i && right_index != center_index) printf("%3s", "->");
            else if (center_index == i) printf("%3s", "+");
            else printf("   ");
        }
        printf("\n");

        printf("%3d|", center_index);
        for (i=0; i<n; i++)
        {
            printf("%3d", a[i]);
        }
        printf("\n");


        int value = a[center_index];
        if (key == value)
        {
            return center_index;
        }
        else if (value < key)
        {
            left_index = center_index + 1;
        }
        else
        {
            right_index = center_index - 1;
        }

        printf("   |\n");
    }
    return -1;
}

int main(void)
{
    int i, n, key;
    int *arr;
    printf("��� ����: ");
    scanf("%d", &n);
    arr = (int *)calloc(n, sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Key: ");
    scanf("%d", &key);

    printf("   |");
    for (i = 0; i < n; i++) printf("%3d", i);
    printf("\n---+");
    for (i = 0; i < n; i++) printf("---");
    printf("\n");
    
    int num = bin_search(arr, n, key);
    if (num != -1)
    {
        printf("%d�� arr[%d]�� �ֽ��ϴ�\n", key, num);
    }
    else 
        printf("��ġ�� ��Ұ� ����\n");
        
    return 0;
}