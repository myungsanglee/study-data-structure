// 배열 요소를 역순으로 정렬하는 과정을 일일이 출력하도록 작성하세요
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ary_reverse(int a[], int n)
{
    int i, j;
    for (i = 0; i < n / 2; i++)
    {
        printf("a[%d]와 a[%d]를 교환합니다.\n", i, n - i -1);
        int tmp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = tmp;
        for (j=0; j < n; j++)
        {
            printf("%d ", a[j]);
        }
        printf("\n");
    }
}

int main(void)
{
    int num, i;
    int *arr;
    do {
        printf("배열 요소 개수를 정하세요: ");
        scanf("%d", &num);
    } while(num <= 0);
    arr = (int *)calloc(num, sizeof(int));
    srand(time(NULL));
    for (i = 0; i < num; i++)
    {
        arr[i] = rand() % 10;
    }
    puts("배열 역순 정렬 시작");
    for (i = 0; i < num; i++) printf("%d ", arr[i]);
    puts("");
    ary_reverse(arr, num);
    puts("배열 역순 정렬 종료");

    return 0;
}