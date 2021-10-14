#include <stdio.h>
#include "IntQueue.h"

int main(void)
{
    IntQueue que;
    if (Initialize(&que, 64) == -1) {
        puts("큐 생성에 실패하였습니다.");
        return 1;
    }

    while(1) {
        int menu, x, i;
        printf("현재 데이터 수: %d / %d\n", Size(&que), Capacity(&que));
        printf("(1) 인큐 (2) 디큐 (3) 피크 (4) 출력 (5) 검색2 (0) 종료: ");
        scanf("%d", &menu);

        if(menu == 0) break;
        switch (menu)
        {
        case 1:
            printf("데이터: ");
            scanf("%d", &x);
            if (Enque(&que, x) == -1)
                puts("\a오류: 인큐에 실패하였습니다.");
            break;

        case 2:
            if(Deque(&que, &x) == -1)
                puts("\a오류: 디큐에 실패하였습니다.");
            else
                printf("디큐 데이터는 %d입니다.\n", x);
            break;

        case 3:
            if(Peek(&que, &x) == -1)
                puts("\a오류: 피크에 실패하였습니다.");
            else
                printf("피크 데이터는 %d입니다.\n", x);
            break;
        
        case 4:
            Print(&que);
            break;
        
        case 5:
            printf("검색할 숫자를 입력하세요: ");
            scanf("%d", &x);
            i = Search2(&que, x);
            if (i >= 0) {
                printf("검색한 숫자는 큐의 %d 번째에 있습니다.\n", i);
            }
            else {
                printf("검색 실패\n");
            }
            break;

        default:
            break;
        }
    }
    Terminate(&que);
    return 0;
}
