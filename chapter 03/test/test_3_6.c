// ����� ���� ������������ ���ĵ� long�� �迭������ �˻��� bsearch
// �Լ��� ����Ͽ� ���α׷��� �ۼ��ϼ���
#include <stdio.h>
#include <stdlib.h> 

int compare_long(const void *x, const void *y)
{
    long *xx = (long *)x;
    long *yy = (long *)y;
    if (*xx > *yy) return -1;
    else if (*xx < *yy) return 1;
    else return 0;
}

int main()
{
    long arr[] = {10, 9, 8, 7, 6, 5};
    int num = sizeof(arr) / sizeof(arr[0]);
    long *arr_ptr;
    long key;
    printf("ã�� Ű ���� �Է��ϼ���: ");
    scanf("%d", &key);
    printf("key: %d", key);
    arr_ptr = (long *)bsearch(&key, arr, num, sizeof(long), compare_long);
    printf("%d", (arr_ptr - arr));

    return 0;


}