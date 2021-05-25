#include <stdio.h>

typedef struct {
    int y;
    int m;
    int d;
} Date;

// �� ���� �� ��
int mdays[][12] = {
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

// year���� �����ΰ�?
int isleap(int year)
{
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

// y�� m�� d���� ��Ÿ���� ����ü�� ��ȯ�ϴ� �Լ� �ۼ�
Date DateOf(int y, int m, int d)
{
    Date date = {y, m, d};

    return date;
}

// ��¥ x�� n�� ���� ��¥�� ��ȯ�ϴ� �Լ�
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


// ��¥ x�� n�� ���� ��¥�� ��ȯ�ϴ� �Լ�
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
    printf("���� ������ ��¥: %d�� %d�� %d��\n", tmp.y, tmp.m, tmp.d);
    do {
        printf("�� �� ���� ��¥�� ���ұ��?: ");
        scanf("%d", &num);
    } while (num <= 0);
    tmp = After(tmp, num);
    printf("%d�� ���� ��¥�� %d�� %d�� %d���Դϴ�\n", num, tmp.y, tmp.m, tmp.d);

    return 0;
}
