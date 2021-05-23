// 배열 요소의 최댓값을 구합니다(값을 난수로 생성)
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   

int maxof(const int a[], int n)
{
    int i;
    int max = a[0];
    for(i=0; i < n; i++){
        if(a[i] > max) max = a[i];
    }
    return max;
}

int main(void)
{
    int i;
    int *height;
    int number;
    printf("사람 수: ");
    scanf("%d", &number);
    height = (int *)calloc(number, sizeof(int));
    srand(time(NULL)); // 시간으로 난수의 seed 초기화
    for(i=0; i < number; i++){
        height[i] = 100 + rand() % 90; // 100 ~ 189의 난수를 생성
        printf("height[%d] = %d\n", i, height[i]);
    }
    
    printf("최댓값은 %d입니다.\n", maxof(height, number));
    free(height);

    return 0;
}