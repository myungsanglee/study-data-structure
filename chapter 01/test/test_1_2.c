// �� ������ �ּڰ��� ���ϴ� ���α׷�
#include <stdio.h>

// a, b, c�� �ּڰ��� ���մϴ�
int min3(int a, int b, int c)
{
    int min = a;
    if(b < min) min = b;
    if(c < min) min = c;

    return min;  
}

int main()
{
    printf("mim3(%d, %d, %d) = %d\n", 1, 2, 3, min3(1, 2, 3));
    
    return 0;
}