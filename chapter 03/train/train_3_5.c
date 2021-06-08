// bsearch �Լ��� ����� ������������ ���ĵ� �迭�� �˻��մϴ�
#include <stdio.h>
#include <stdlib.h>

// ������ ���ϴ� �Լ�(��������)
int int_cmp(const void *a, const void *b)
{
    if (*(int *)a < *(int *)b)
        return -1;
    else if (*(int *)a > *(int *)b)
        return 1;
    else
        return 0;
}

int main(void)
{
    int i, nx, ky;
    int *x;
    int *p;
    puts("bsearch �Լ��� ����Ͽ� �˻�");
    printf("��� ����: ");
    scanf("%d", &nx);
    x = (int*)calloc(nx, sizeof(int));

    printf("������������ �Է��ϼ���.\n");
    printf("x[0]: ");
    scanf("%d", &x[0]);
    for (i=1; i < nx; i++)
    {
        do {
            printf("x[%d]: ", i);
            scanf("%d", &x[i]);
        } while (x[i] < x[i - 1]);
    }
    printf("�˻���: ");
    scanf("%d", &ky);

    p = (int *)bsearch(&ky, x, nx, sizeof(int), int_cmp);
    if (p == NULL)
        puts("�˻��� �����߽��ϴ�");
    else    
        printf("%d�� x[%d]�� �ֽ��ϴ�\n", ky, (int)(p-x));

    free(x);

    return 0;
}