#include <stdio.h>

typedef struct {
    int y;
    int m;
    int d;
} Date;

// 각 달의 날 수
int mdays[][12] = {
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

// year년이 윤년인가?
int isleap(int year)
{
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

// y년 m월 d일을 나타내는 구조체를 반환하는 함수 작성
Date DateOf(int y, int m, int d)
{
    Date date = {y, m, d};

    return date;
}

// 날짜 x의 n일 뒤의 날짜를 반환하는 함수
Date After(Date x, int n)
{
    while (n--)
    {
        if (x.d % mdays[isleap(x.y)][x.m - 1] == 0)
        {
            x.d = 1;
            if (x.m % 12 == 0)
            {
                x.m = 1;
                x.y += 1;
            }
            else
            {
                x.m += 1;
            }
        }
        else 
        {
            x.d += 1;
        }   
    }

//	x.d += n;
//
//	while (x.d > mdays[isleap(x.y)][x.m - 1]) {
//		x.d -= mdays[isleap(x.y)][x.m - 1];
//		if (++x.m > 12) {
//			x.y++;
//			x.m = 1;
//		}
//	}

    return x;
}


// 날짜 x의 n일 앞의 날짜를 반환하는 함수
Date Before(Date x, int n)
{
	if (n < 0)
		return After(x, -n);

	x.d -= n;

	while (x.d < 1) {
		if (--x.m < 1) {
			x.y--;
			x.m = 12;
		}
		x.d += mdays[isleap(x.y)][x.m - 1];
	}

	return x;
}


int main(void)
{
    Date tmp = {2012, 12, 31};
    int num;
    printf("현재 임의의 날짜: %d년 %d월 %d일\n", tmp.y, tmp.m, tmp.d);
    do {
        printf("몇 일 후의 날짜를 구할까요?: ");
        scanf("%d", &num);
    } while (num <= 0);
    tmp = After(tmp, num);
    printf("%d일 후의 날짜는 %d년 %d월 %d일입니다\n", num, tmp.y, tmp.m, tmp.d);

    return 0;
}
