// 배열 a의 모든 요소의 순서를 뒤섞는 shuffle 함수를 작성하세요(n은 요소 개수)
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void shuffle(int a[], int n)    
{
    srand(time(NULL));
    int i;

    for (i = n - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);
        if (i != j)
        {
            int tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
        }
    }
}

int main(void)
{
    int * arr_a;
    int num;
    do {
        printf("배열 요소의 개수를 정하세요: ");
        scanf("%d", &num);
    } while (num <= 0);

    arr_a = (int *)calloc(num, sizeof(int));

    srand(time(NULL));
    puts("임의의 숫자를 배열 b에 넣는다 그 수는 다음과 같다");
    int i;
    for (i = 0; i < num; i++)
    {
        arr_a[i] = rand() % 100;
        printf("arr_a[%d]: %d\n", i, arr_a[i]);
    }

    puts("배열 a를 뒤섞는다. 그 결과는 다음과 같다");
    shuffle(arr_a, num);
    for (i = 0; i < num; i++)
    {
        printf("arr_a[%d]: %d\n", i, arr_a[i]);
    }

    free(arr_a);

    return 0;
}