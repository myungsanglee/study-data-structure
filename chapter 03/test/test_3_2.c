// 선형 검색의 스캐닝 과정을 상세하게 표시하는 프로그램을 작성하세요
// 선형 검색 (보초법 사용)
#include <stdio.h>
#include <stdlib.h>

// 요소의 개수가 n인 배열 a에서 key와 일치하는 요소를 선형 검색
int search(int a[], int n, int key)   
{
    int i, j = 0;
    a[n] = key;
    printf("   |");
    for (j = 0; j < n; j++)
        printf("%2d", j);
    printf("\n---+");
    for (j = 0; j < n; j++)
        printf("%s", "--");
    printf("\n");
    while(1)
    {
        printf("   |");
        for (j=0; j < i; j++)
            printf("  ");
        printf("%2c\n%3d|", '*', i);
        for (j=0; j < n; j++)
            printf("%2d", a[j]);
        printf("\n");
        if (a[i] == key)
            break;
        i++;
        printf("   |\n");
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