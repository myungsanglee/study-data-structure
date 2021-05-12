// 그림과 같이 위쪽과 왼쪽에 더하는 수가 있는 덧셈표를 
// 출력하는 프로그램을 작성하세요.
#include <stdio.h>  

int main(void)
{
    int i, j;
    for (i = -1; i <= 9; i++)
    {
        for (j = -1; j <=9; j++)
        {
            if (i == -1)
            {
                if (j == -1)
                    printf("%3s", "");
                else if (j == 0)
                    printf("%3s", "|");
                else
                    printf("%3d", j);
            }
            else if (i == 0)   
            {
                if(j != 0)
                    printf("%3s", "---");
                else    
                    printf("%3s", "+");
            }
            else
            {
                if (j == -1)
                    printf("%3d", i);
                else if (j == 0)
                    printf("%3s", "|");
                else    
                    printf("%3d", i + j);
            }   
        }
        putchar('\n');
    }

    return 0;
}