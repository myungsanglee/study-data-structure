// �� ������ �ּڰ��� ���ϴ� ���α׷�
#include <stdio.h>

// a, b, c, d�� �ּڰ��� ���մϴ�
int min4(int a, int b, int c, int d)
{
    int min = a;
    if(b < min) min = b;
    if(c < min) min = c;
    if(d < min) min = d;

    return min;  
}

int main()
{
    printf("mim4(%d, %d, %d, %d) = %d\n", 1, 2, 3, 4, min4(1, 2, 3, 4));
    
    return 0;
}