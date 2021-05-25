// 선형 검색 (보초법 사용)
#include <stdio.h>
#include <stdlib.h>

// 요소의 개수가 n인 배열 a에서 key와 일치하는 요소를 선형 검색
int search(int a[], int n, int key)   
{
    int i = 0;
    a[n] = key;
    while(1)
    {
        if (a[i] == key)
            break;
        i++;
    }
    return i == n ? -1 : i;
}   

int main(void)
{
    int i, nx, ky, idx;
    int *x;
    puts("선형 검색");
    printf("요소 개수: ");
    scanf("%d", &nx);
    x = (int *)calloc(nx + 1, sizeof(int));
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