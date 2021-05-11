// 정수 a, b를 포함하여 그 사이의 모든 정수의 합을 구하는 함수를 작성하세요
// a와 b의 대소 관계에 상관없이 합을 구하세요
#include <stdio.h>  
#include <stdlib.h> // for abs()

int sumof(int a, int b) 
{
    return ((a + b) * (abs((a - b) + 1))) / 2;
}

int main(void)
{
    int a, b;
    puts("정수 a, b를 선택하세요.");
    printf("a: ");
    int c = scanf("%d", &a);
    printf("c: %d\n", c);
    printf("b: ");
    scanf("%d", &b);

    int sum = sumof(a, b);

    printf("%d와 %d 사이의 모든 정수의 합은 %d입니다.", a, b, sum);

    return 0;
}