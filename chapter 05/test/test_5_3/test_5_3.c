/* 유클리드 호제법에 의해 최대공약수를 구한다 */
#include <stdio.h>
#include <stdlib.h>

/* 정수 x, y의 최대공약수를 반환 */
int gcd(int x, int y)
{
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
}

int gcd_array(const int a[], int n)
{
    if (n == 1) 
        return a[0];
    else if (n == 2) 
        return gcd(a[0], a[1]);
    else 
        return gcd(a[0], gcd_array(&a[1], n - 1));
}

int main(void)
{
    int i, num;
    int *x;

    printf("배열 요소의 개수를 입력하세요: ");
    scanf("%d", &num);

    x = (int *)calloc(num, sizeof(int));
    for (i = 0; i < num; i++) {
        printf("정수를 입력하세요: ");
        scanf("%d", &x[i]);
    }

    printf("배열의 최대공약수는 %d입니다.\n", gcd_array(x, num));

    return 0;
}