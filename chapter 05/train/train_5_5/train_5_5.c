// ��� ȣ���� ������ recur �Լ�
#include <stdio.h>
#include "IntStack.h"

// ��� �Լ�
void recur(int n)   
{
    IntStack stack;
    Initialize(&stack, 100);
Top:
    if (n > 0) {
        Push(&stack, n);
        n = n - 1;
        Print(&stack);
        goto Top;
    }
    Print(&stack);
    if (!IsEmpty(&stack)) {
        Print(&stack);
        Pop(&stack, &n);
        printf("%d\n", n);
        n = n - 2;
        goto Top;
    }

    Terminate(&stack);
}

int main(void)
{
    int x;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &x);
    recur(x);

    return 0;
}
