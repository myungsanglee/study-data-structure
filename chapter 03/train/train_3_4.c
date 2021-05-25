// ���� �˻�
#include <stdio.h>
#include <stdlib.h>

// ����� ������ n�� �迭 a���� key�� ��ġ�ϴ� ��Ҹ� ���� �˻�
int bin_search(const int a[], int n, int key)
{
    int pl = 0; // �˻� ���� �� ���� �ε���
    int pr = n - 1; // �˻� ���� �� ���� �ε���
    int pc; // �˻� ���� �Ѱ���� �ε���
    do {
        pc = (pl + pr) / 2;
        if (a[pc] == key) // �˻� ����
            return pc;
        else if (a[pc] < key)
            pl = pc + 1;
        else    
            pr = pc - 1;
    } while (pl <= pr);
    return -1;
}

int main(void)
{
    
}