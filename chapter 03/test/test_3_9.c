// bsearch 함수와 같은 형식으로 호출할 수 있는 함수를 작성하세요
// 단 검색에 성공하면 그 위치에서 앞쪽으로 선형 검색을 수행하여 가장 앞쪽의 요소에 대한 포인터를 반환하세요
#include <stdio.h>
#include <stdlib.h>

void *bsearchx(const void *key, const void *base, size_t nmemb, size_t size, int(*compar)(const void *, const void *))
{
    char *x = (char *)base;
    size_t pl = 0; // 맨 왼쪽 인덱스
    size_t pr = nmemb - 1; // 맨 오른쪽 인덱스
    size_t pc;

    if (nmemb > 0) {
        while(1) {
            pc = (pl + pr) / 2;
            int result = compar((const void *)&x[pc * size], key);
            
            if (result == 0) {
                for (; pc > pl; pc--) {
                    if (compar((const void *)&x[(pc - 1) * size], key))
                        break;
                }
                return &x[pc * size];
            }
            else if (result > 0)
                pr = pc - 1;
            else if (pr == pl)
                break;
            else
                pl = pc + 1;
        }
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
    int arr[] = {1, 2, 2, 3, 4, 5, 5, 5};
    int arr_num = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("찾을 정수를 입력하세요: ");
    scanf("%d", &key);
    int *ptr = (int *)bsearchx(&key, arr, arr_num, sizeof(int), int_compar);
    if (ptr == NULL)
        printf("%d값은 배열에 존재하지 않습니다.\n", key);
    else
        printf("%d값은 arr[%d]에 존재합니다.\n", key, (ptr - arr));

    return 0;
}