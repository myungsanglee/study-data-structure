// bsearch �Լ��� ���� �������� ȣ���� �� �ִ� �Լ��� �ۼ��ϼ���
// �� �˻��� �����ϸ� �� ��ġ���� �������� ���� �˻��� �����Ͽ� ���� ������ ��ҿ� ���� �����͸� ��ȯ�ϼ���
#include <stdio.h>
#include <stdlib.h>

void *bsearchx(const void *key, const void *base, size_t nmemb, size_t size, int(*compar)(const void *, const void *))
{
    char *x = (char *)base;
    size_t pl = 0; // �� ���� �ε���
    size_t pr = nmemb - 1; // �� ������ �ε���
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
    printf("ã�� ������ �Է��ϼ���: ");
    scanf("%d", &key);
    int *ptr = (int *)bsearchx(&key, arr, arr_num, sizeof(int), int_compar);
    if (ptr == NULL)
        printf("%d���� �迭�� �������� �ʽ��ϴ�.\n", key);
    else
        printf("%d���� arr[%d]�� �����մϴ�.\n", key, (ptr - arr));

    return 0;
}