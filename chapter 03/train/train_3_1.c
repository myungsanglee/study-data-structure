// ���� �˻�
#include <stdio.h>
#include <stdlib.h>

// ����� ������ n�� �迭 a���� key�� ��ġ�ϴ� ��Ҹ� ���� �˻�
int search(const int a[], int n, int key)   
{
    int i = 0;
    while(1)
    {
        if (i == n)
            return -1; // ����
        
        if (a[i] == key)
            return i; // ����
        
        i++;
    }
}

int main(void)
{
    int i, nx, ky, idx;
    int *x;
    puts("���� �˻�");
    printf("��� ����: ");
    scanf("%d", &nx);
    x = (int *)calloc(nx, sizeof(int));
    for (i = 0; i < nx; i++)
    {
        printf("x[%d]: ", i);
        scanf("%d", &x[i]);
    }
    printf("�˻���: ");
    scanf("%d", &ky);
    idx = search(x, nx, ky);
    if (idx == -1)
        puts("�˻��� ����");
    else        
        printf("%d�� x[%d]�� �ֽ��ϴ�.\n", ky, idx);

    free(x);

    return 0;
}