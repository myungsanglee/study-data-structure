// bsearch 함수와 같은 형식으로 호출할 수 있는 함수를 작성하세요
// 단 선형 검색 알고리즘을 사용하고 배열은 정렬되어 있지 않아도 좋습니다
#include <stdio.h>
#include <stdlib.h>

void *seqsearch(const void *key, const void *base, size_t nmemb, size_t size, int(*compar)(const void *, const void *))
{
    char *x = (char *)base;
    size_t i = 0;

    for (i; i < nmemb; i++) {
        int result = compar((const void *)&x[i * size], key);
        if (result == 0)    
            return (&x[i * size]);
    }

    return NULL;
}

int int_compar(const void *x, const void *y)
{
    int *xx = (int *)x;
    int *yy = (int *)y;
    if (*xx > *yy)
        return 1;
    else if (*xx < *yy)
        return -1;
    else
        return 0;
}

int main()
{
    int arr[] = {5, 1, 2, 4, 3};
    int arr_num = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("찾을 정수를 입력하세요: ");
    scanf("%d", &key);
    int *ptr = (int *)seqsearch(&key, arr, arr_num, sizeof(int), int_compar);
    if (ptr == NULL)
        printf("%d값은 배열에 존재하지 않습니다.\n", key);
    else
        printf("%d값은 arr[%d]에 존재합니다.\n", key, (ptr - arr));

    return 0;
}