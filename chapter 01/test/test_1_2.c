// 세 정수의 최솟값을 구하는 프로그램
#include <stdio.h>

// a, b, c의 최솟값을 구합니다
int min3(int a, int b, int c)
{
    int min = a;
    if(b < min) min = b;
    if(c < min) min = c;

    return min;  
}

int main()
{
    printf("mim3(%d, %d, %d) = %d\n", 1, 2, 3, min3(1, 2, 3));
    
    return 0;
}