// 1000 ������ �Ҽ��� �����մϴ�(���� 3)
#include <stdio.h>  

int main(void)
{
    int i, n;
    int prime[500];                     // �Ҽ��� �����ϴ� �迭
    int ptr = 0;                        // �̹� ���� �Ҽ��� ����
    unsigned long counter = 0;          // ������ Ƚ��
    prime[ptr++] = 2;                   // 2�� �Ҽ�
    prime[ptr++] = 3;                   // 3�� �Ҽ�
    for (n = 5; n <= 1000; n += 2)       // Ȧ����
    {
        int flag = 0;
        for (i = 1; counter++, prime[i] * prime[i] <= n; i++)       // �̹� ���� �Ҽ��� ������
        {
            counter++;
            if (n % prime[i] == 0)      // ������ �������Ƿ� �Ҽ��� �ƴϴ�
            {
                flag = 1;
                break;    
            }
        }
        if (!flag) prime[ptr++] = n; // ���������� ������ �������� �ʾҴٸ� �迭�� ����
    }

    for (i = 0; i < ptr; i++)
    {
        printf("%d\n", prime[i]);
    }
    printf("������ �������� ������ Ƚ��: %lu\n", counter);

    return 0;
}