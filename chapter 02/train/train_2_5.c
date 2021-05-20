// 배열 요소의 최댓값을 구합니다(값을 입력)
#include <stdlib.h>
#include <stdio.h> 

// 요소 개수가 n인 배열 a의 요소의 최댓값을 구합니다
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
    int * height;
    int number;
    printf("사람 수: ");
    scanf("%d", &number);
    height = (int *)calloc(number, sizeof(int));
    printf("%d 사람의 키를 입력하세요.\n", number);
    for(i=0; i < number; i++){
        printf("height[%d]: ", i);
        scanf("%d", &height[i]);
    }
    printf("최댓값은 %d입니다.\n", maxof(height, number));
    free(height);

    return 0;
}