// �� ������ �߾Ӱ��� ���ϴ� ���α׷� 2�� �߿� ȿ���� ���� ����?
#include <stdio.h>

// a, b, c�� �߾Ӱ��� ���մϴ�
int med3_1(int a, int b, int c)
{
    if(a >= b)
        if(b >= c)
            return b;
        else if(a <= c)
            return a;
        else   
            return c;
    else if(a > c)
        return a;
    else if(b > c)
        return c;
    else
        return b;
}

int med3_2(int a, int b, int c)
{
    if((b >= a && c <= a) || (b <= a && c >= a))
        return a;
    else if((a > b && c < b) || (a < b && c > b))
        return b;
    else
        return c;
}


/*
med3_1 �� ��� ���� �����ɸ��� ������ 3�� Ȯ��
med3-2 �� ��� ���� �����ɸ��� ������ 4���̻� Ȯ��
���� ������ ���� ��� med3_1 �Լ��� �� ȿ���� ����

<����>
med3_2 �� ��� ù ��° if�� �������� �ʾ��� �� 
�� ��° else if������ ���� �Ǵ��� �ϹǷ� ȿ���� ���� �ʴ�.
ex) b >= a, b <= a -> ù ��° if
    b > a, b < a -> �� ��° else if
*/