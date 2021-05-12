// 세 정수의 중앙값을 구하는 프로그램 2개 중에 효율이 좋은 것은?
#include <stdio.h>

// a, b, c의 중앙값을 구합니다
int med3_1(int a, int b, int c)
{
    if(a >= b)
        if(b >= c)
            return b;
        else if(a <= c)
            return a;
        else   
            return c;
    else if(a > c)
        return a;
    else if(b > c)
        return c;
    else
        return b;
}

int med3_2(int a, int b, int c)
{
    if((b >= a && c <= a) || (b <= a && c >= a))
        return a;
    else if((a > b && c < b) || (a < b && c > b))
        return b;
    else
        return c;
}


/*
med3_1 의 경우 제일 오래걸리는 공수가 3번 확인
med3-2 의 경우 제일 오래걸리는 공수가 4번이상 확인
따라서 공수가 적게 드는 med3_1 함수가 더 효율이 좋다

<정답>
med3_2 의 경우 첫 번째 if가 성립하지 않았을 때 
두 번째 else if에서도 같은 판단을 하므로 효율이 좋지 않다.
ex) b >= a, b <= a -> 첫 번째 if
    b > a, b < a -> 두 번째 else if
*/