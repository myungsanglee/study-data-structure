// 입력한 수를 한 변으로 하는 정사각형을 * 기호로
// 출력하는 프로그램을 작성하세요
#include <stdio.h>

int main(void)
{
    int i, j, n;
    do {
        printf("양의 정수를 입력하세요: ");
        scanf("%d", &n);
    }while(n <= 0);

    for (i=0; i < n; i++)
    {
        for (j=0; j < n; j++)
        {
            printf("*");
        }
        putchar('\n');
    }
    
    return 0;
}