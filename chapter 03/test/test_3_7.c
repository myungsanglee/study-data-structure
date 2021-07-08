// bsearch �Լ��� ���� �������� ȣ���� �� �ִ� �Լ��� �ۼ��ϼ���
// �� ���� �˻� �˰����� ����ϰ� �迭�� ���ĵǾ� ���� �ʾƵ� �����ϴ�
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
    printf("ã�� ������ �Է��ϼ���: ");
    scanf("%d", &key);
    int *ptr = (int *)seqsearch(&key, arr, arr_num, sizeof(int), int_compar);
    if (ptr == NULL)
        printf("%d���� �迭�� �������� �ʽ��ϴ�.\n", key);
    else
        printf("%d���� arr[%d]�� �����մϴ�.\n", key, (ptr - arr));

    return 0;
}