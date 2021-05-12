// 입력한 높이와 너비에 맞는 직사각형을 
// * 기호로 출력하는 프로그램을 작성하세요
#include <stdio.h>

int main(void)
{
    int height, width;
    do {
        printf("높이: ");
        scanf("%d", &height);
    } while(height <= 0);

    do {
        printf("너비: ");
        scanf("%d", &width);
    } while(width <= 0);

    int i, j;
    for (i=0; i < height; i++)
    {
        for (j=0; j < width; j++)
        {
            printf("*");
        }
        putchar('\n');
    }

    return 0;
}