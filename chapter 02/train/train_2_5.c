// �迭 ����� �ִ��� ���մϴ�(���� �Է�)
#include <stdlib.h>
#include <stdio.h> 

// ��� ������ n�� �迭 a�� ����� �ִ��� ���մϴ�
int maxof(const int a[], int n)
{
    int i;
    int max = a[0];
    for(i=0; i < n; i++){
        if(a[i] > max) max = a[i];
    }
    return max;
}

int main(void)
{
    int i;
    int * height;
    int number;
    printf("��� ��: ");
    scanf("%d", &number);
    height = (int *)calloc(number, sizeof(int));
    printf("%d ����� Ű�� �Է��ϼ���.\n", number);
    for(i=0; i < number; i++){
        printf("height[%d]: ", i);
        scanf("%d", &height[i]);
    }
    printf("�ִ��� %d�Դϴ�.\n", maxof(height, number));
    free(height);

    return 0;
}