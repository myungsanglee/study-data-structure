// ���� a, b�� �����Ͽ� �� ������ ��� ������ ���� ���ϴ� �Լ��� �ۼ��ϼ���
// a�� b�� ��� ���迡 ������� ���� ���ϼ���
#include <stdio.h>  
#include <stdlib.h> // for abs()

int sumof(int a, int b) 
{
    return ((a + b) * (abs((a - b) + 1))) / 2;
}

int main(void)
{
    int a, b;
    puts("���� a, b�� �����ϼ���.");
    printf("a: ");
    int c = scanf("%d", &a);
    printf("c: %d\n", c);
    printf("b: ");
    scanf("%d", &b);

    int sum = sumof(a, b);

    printf("%d�� %d ������ ��� ������ ���� %d�Դϴ�.", a, b, sum);

    return 0;
}