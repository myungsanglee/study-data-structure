// 배열 b의 모든 요소를 배열 a에 복사하는 함수를 작성하세요(n은 요소 개수입니다.)
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void ary_copy(int a[], const int b[], int n)    
{
    int i;
    for (i = 0; i < n; i++)
    {
        a[i] = b[i];
    }
}

int main(void)
{
    int * arr_a;
    int * arr_b;
    int num;
    do {
        printf("배열 요소의 개수를 정하세요: ");
        scanf("%d", &num);
    } while (num <= 0);

    arr_a = (int *)calloc(num, sizeof(int));
    arr_b = (int *)calloc(num, sizeof(int));

    srand(time(NULL));
    puts("임의의 숫자를 배열 b에 넣는다 그 수는 다음과 같다");
    int i;
    for (i = 0; i < num; i++)
    {
        arr_b[i] = rand() % 100;
        printf("arr_b[%d]: %d\n", i, arr_b[i]);
    }

    puts("배열 b를 a에 복사한다 배열 a는 다음과 같다");
    ary_copy(arr_a, arr_b, num);
    for (i = 0; i < num; i++)
    {
        printf("arr_a[%d]: %d\n", i, arr_a[i]);
    }

    return 0;
}