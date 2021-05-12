// 네 정수의 최댓값을 구하는 프로그램
#include <stdio.h>

// a, b, c, d의 최대값을 구합니다
int max4(int a, int b, int c, int d)
{
    int max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    if(d > max) max = d;

    return max;  
}

int main()
{
    printf("max4(%d, %d, %d, %d) = %d\n", 1, 2, 3, 4, max4(1, 2, 3, 4));
    
    return 0;
}