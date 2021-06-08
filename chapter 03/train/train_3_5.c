// bsearch 함수를 사용해 오름차순으로 정렬된 배열을 검색합니다
#include <stdio.h>
#include <stdlib.h>

// 정수를 비교하는 함수(오름차순)
int int_cmp(const void *a, const void *b)
{
    if (*(int *)a < *(int *)b)
        return -1;
    else if (*(int *)a > *(int *)b)
        return 1;
    else
        return 0;
}

int main(void)
{
    int i, nx, ky;
    int *x;
    int *p;
    puts("bsearch 함수를 사용하여 검색");
    printf("요소 개수: ");
    scanf("%d", &nx);
    x = (int*)calloc(nx, sizeof(int));

    printf("오름차순으로 입력하세요.\n");
    printf("x[0]: ");
    scanf("%d", &x[0]);
    for (i=1; i < nx; i++)
    {
        do {
            printf("x[%d]: ", i);
            scanf("%d", &x[i]);
        } while (x[i] < x[i - 1]);
    }
    printf("검색값: ");
    scanf("%d", &ky);

    p = (int *)bsearch(&ky, x, nx, sizeof(int), int_cmp);
    if (p == NULL)
        puts("검색에 실패했습니다");
    else    
        printf("%d는 x[%d]에 있습니다\n", ky, (int)(p-x));

    free(x);

    return 0;
}