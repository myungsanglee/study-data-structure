#include <stdio.h>
#include "IntStack.h"

int main(void)
{
    IntStack s;
    if (Initialize(&s, 64) == -1) {
        puts("스택 생성에 실패하였습니다.");
        return 1;
    }

    while(1) {
        int menu, x;
        printf("현재 데이터 수: %d / %d\n", Size(&s), Capacity(&s));
        printf("(1) 푸시 (2) 팝 (3) 피크 (4) 출력 (5) 스택 용량 (6) 데이터 수 (7) 검색 (8) Empty? (9) Full? (0) 종료: ");
        scanf("%d", &menu);

        if(menu == 0) break;
        switch (menu)
        {
        case 1:
            printf("데이터: ");
            scanf("%d", &x);
            if (Push(&s, x) == -1)
                puts("\a오류: 푸시에 실패하였습니다.");
            break;

        case 2:
            if(Pop(&s, &x) == -1)
                puts("\a오류: 팝에 실패하였습니다.");
            else
                printf("팝 데이터는 %d입니다.\n", x);
            break;

        case 3:
            if(Peek(&s, &x) == -1)
                puts("\a오류: 피크에 실패하였습니다.");
            else
                printf("피크 데이터는 %d입니다.\n", x);
            break;
        
        case 4:
            Print(&s);
            break;
        
        case 5:
            printf("스택의 용량은 %d입니다.\n", Capacity(&s));
            break;

        case 6:
            printf("스택에 쌓여 있는 데이터의 수는 %d입니다.\n", Size(&s));
            break;

        case 7:
            printf("검색할 숫자를 입력하세요: ");
            scanf("%d", &x);
            if (Search(&s, x) >= 0) {
                printf("검색 성공!\n");
            }
            else {
                printf("검색 실패!\n");
            }
            break;

        case 8:
            if (IsEmpty(&s)) printf("스택은 비어있습니다.\n");
            else printf("스택은 비어있지 않습니다.\n");
            break;

        case 9:
            if (IsFull(&s)) printf("스택은 가득찼습니다.\n");
            else printf("스택은 가득차지 않았습니다.\n");
            break;

        default:
            break;
        }
    }
    Terminate(&s);
    return 0;
}
