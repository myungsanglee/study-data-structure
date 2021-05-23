// 키의 최댓값을 구하는 프로그램을 작성하세요
// 단 사람 수와 키 모두 난수로 생성하세요
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int sumof(const int a[], int n)
{
    int i;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    
    return sum;
}

int main(void)
{
    int i;
    int * height;
    srand(time(NULL));
    int num = 5 + rand() % 16;
    printf("사람 수는 %d명입니다.\n", num);
    height = (int *)calloc(num, sizeof(int));
    printf("키 값은 자동으로 생성됩니다\n");
    for (i = 0; i < num; i++)
    {
        height[i] = 100 + rand() % 90;
        printf("height[%d]: %d\n", i, height[i]);
    }
    printf("키의 합계는 %d 입니다.", sumof(height, num));

    return 0;
}