#include <stdio.h>

typedef struct {
    int y;
    int m;
    int d;
} Date;

// y�� m�� d���� ��Ÿ���� ����ü�� ��ȯ�ϴ� �Լ� �ۼ�
Date DateOf(int y, int m, int d)
{
    Date date = {y, m, d};

    return date;
}

// ��¥ x�� n�� ���� ��¥�� ��ȯ�ϴ� �Լ�
Date After(Date x, int n)
{
    
}

// ��¥ x�� n�� ���� ��¥�� ��ȯ�ϴ� �Լ�
Date Befor(Date x, int n)   
{

}