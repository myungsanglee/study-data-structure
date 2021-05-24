#include <stdio.h>

typedef struct {
    int y;
    int m;
    int d;
} Date;

// y년 m월 d일을 나타내는 구조체를 반환하는 함수 작성
Date DateOf(int y, int m, int d)
{
    Date date = {y, m, d};

    return date;
}

// 날짜 x의 n일 뒤의 날짜를 반환하는 함수
Date After(Date x, int n)
{
    
}

// 날짜 x의 n일 앞의 날짜를 반환하는 함수
Date Befor(Date x, int n)   
{

}