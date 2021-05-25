// 선형 검색 (버전 2 for문)
#include <stdio.h>
#include <stdlib.h>

// 요소의 개수가 n인 배열 a에서 key와 일치하는 요소를 선형 검색
int search(const int a[], int n, int key)   
{
    int i;
    for (i=0; i < n; i++)
    {
        if (a[i] == key)
            return i;
    }
    return -1;
}

int main(void)
{
    int i, nx, ky, idx;
    int *x;
    puts("선형 검색");
    printf("요소 개수: ");
    scanf("%d", &nx);
    x = (int *)calloc(nx, sizeof(int));
    for (i = 0; i < nx; i++)
    {
        printf("x[%d]: ", i);
        scanf("%d", &x[i]);
    }
    printf("검색값: ");
    scanf("%d", &ky);
    idx = search(x, nx, ky);
    if (idx == -1)
        puts("검색에 실패");
    else        
        printf("%d는 x[%d]에 있습니다.\n", ky, idx);

    free(x);

    return 0;
}