// �迭 ��Ҹ� �������� �����մϴ�
#include <stdlib.h>
#include <stdio.h>  

#define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)

void ary_reverse(int a[], int n)
{
    int i;
    for(i=0; i < n / 2; i++)
    {
        swap(int, a[i], a[n - i -1]);
    }
}

int main(void)
{
    int i;
    int *x; // �迭 ù ��° ����� ������
    int nx; // �迭 x�� ��� ����

    printf("��� ����: ");
    scanf("%d", &nx);
    x = (int *)calloc(nx, sizeof(int));
    printf("%d���� ������ �Է��ϼ���.\n", nx);
    for(i=0; i < nx; i++){
        printf("x[%d]: ", i);
        scanf("%d", &x[i]);
    }
    ary_reverse(x, nx); 
    printf("�迭�� ��Ҹ� �������� �����߽��ϴ�.\n");
    for(i=0; i < nx; i++){
        printf("x[%d]: %d\n", i, x[i]);
    }
    free(x);

    return 0;

}