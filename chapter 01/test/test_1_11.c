// 양의 정수를 입력하고 자릿수를 출력하는 프로그램을 작성하세요. 
// 예를 들어 135를 입력하면 '그 수는 3자리입니다.'라고 출력하고,
// 1314를 입력하면 '그 수는 4자리입니다.'라고 출력하면 됩니다.
#include <stdio.h>  

int main(void)
{
    int n;
    int digits; // 자릿수
    while(1)
    {
        printf("양의 정수를 입력하세요: ");
        scanf("%d", &n);
        if (n > 0)
        {
            while(n > 0)
            {   
                n /= 10;
                digits++;
            }
            break;
        }
    }
    printf("그 수는 %d자리입니다.\n", digits);

    return 0;
}