// 재귀 호출을 제거한 recur 함수
#include <stdio.h>
#include "IntStack.h"

// 재귀 함수
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
    printf("정수를 입력하세요: ");
    scanf("%d", &x);
    recur(x);

    return 0;
}
