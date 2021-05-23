// 배열 요소를 역순으로 정렬합니다
#include <stdlib.h>
#include <stdio.h>  

#define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)

void ary_reverse(int a[], int n)
{
    int i;
    for(i=0; i < n / 2; i++)
    {
        swap(int, a[i], a[n - i -1]);
    }
}

int main(void)
{
    int i;
    int *x; // 배열 첫 번째 요소의 포인터
    int nx; // 배열 x의 요소 개수

    printf("요소 개수: ");
    scanf("%d", &nx);
    x = (int *)calloc(nx, sizeof(int));
    printf("%d개의 정수를 입력하세요.\n", nx);
    for(i=0; i < nx; i++){
        printf("x[%d]: ", i);
        scanf("%d", &x[i]);
    }
    ary_reverse(x, nx); 
    printf("배열의 요소를 역순으로 정렬했습니다.\n");
    for(i=0; i < nx; i++){
        printf("x[%d]: %d\n", i, x[i]);
    }
    free(x);

    return 0;

}