// ���� �˻��� ��ĳ�� ������ ���ϰ� ǥ���ϴ� ���α׷��� �ۼ��ϼ���
// ���� �˻� (���ʹ� ���)
#include <stdio.h>
#include <stdlib.h>

// ����� ������ n�� �迭 a���� key�� ��ġ�ϴ� ��Ҹ� ���� �˻�
int search(int a[], int n, int key)   
{
    int i, j = 0;
    a[n] = key;
    printf("   |");
    for (j = 0; j < n; j++)
        printf("%2d", j);
    printf("\n---+");
    for (j = 0; j < n; j++)
        printf("%s", "--");
    printf("\n");
    while(1)
    {
        printf("   |");
        for (j=0; j < i; j++)
            printf("  ");
        printf("%2c\n%3d|", '*', i);
        for (j=0; j < n; j++)
            printf("%2d", a[j]);
        printf("\n");
        if (a[i] == key)
            break;
        i++;
        printf("   |\n");
    }
    return i == n ? -1 : i;
}   

int main(void)
{
    int i, nx, ky, idx;
    int *x;
    puts("���� �˻�");
    printf("��� ����: ");
    scanf("%d", &nx);
    x = (int *)calloc(nx + 1, sizeof(int));
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