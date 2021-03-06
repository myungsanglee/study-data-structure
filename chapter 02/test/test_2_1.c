// 키의 최솟값을 구하는 프로그램을 작성하세요
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int minof(const int a[], int n)
{
    int i;
    int min = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] < min) min = a[i];
    }
    return min;
}

int main(void)
{
    int i;
    int * height;
    int num;
    srand(time(NULL));
    do {
        printf("요소 개수를 정하세요: ");
        scanf("%d", &num);
    } while(num <= 0);
    height = (int *)calloc(num, sizeof(int));
    printf("키 값은 자동으로 생성됩니다\n");
    for (i = 0; i < num; i++)
    {
        height[i] = 100 + rand() % 90;
        printf("height[%d]: %d\n", i, height[i]);
    }
    printf("키의 최솟값은 %d 입니다.", minof(height, num));

    return 0;
}