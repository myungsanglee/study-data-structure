#include <stdio.h>
#include "IntQueue.h"

int main(void)
{
    IntQueue que;
    if (Initialize(&que, 64) == -1) {
        puts("ť ������ �����Ͽ����ϴ�.");
        return 1;
    }

    while(1) {
        int menu, x, i;
        printf("���� ������ ��: %d / %d\n", Size(&que), Capacity(&que));
        printf("(1) ��ť (2) ��ť (3) ��ũ (4) ��� (5) �˻�2 (0) ����: ");
        scanf("%d", &menu);

        if(menu == 0) break;
        switch (menu)
        {
        case 1:
            printf("������: ");
            scanf("%d", &x);
            if (Enque(&que, x) == -1)
                puts("\a����: ��ť�� �����Ͽ����ϴ�.");
            break;

        case 2:
            if(Deque(&que, &x) == -1)
                puts("\a����: ��ť�� �����Ͽ����ϴ�.");
            else
                printf("��ť �����ʹ� %d�Դϴ�.\n", x);
            break;

        case 3:
            if(Peek(&que, &x) == -1)
                puts("\a����: ��ũ�� �����Ͽ����ϴ�.");
            else
                printf("��ũ �����ʹ� %d�Դϴ�.\n", x);
            break;
        
        case 4:
            Print(&que);
            break;
        
        case 5:
            printf("�˻��� ���ڸ� �Է��ϼ���: ");
            scanf("%d", &x);
            i = Search2(&que, x);
            if (i >= 0) {
                printf("�˻��� ���ڴ� ť�� %d ��°�� �ֽ��ϴ�.\n", i);
            }
            else {
                printf("�˻� ����\n");
            }
            break;

        default:
            break;
        }
    }
    Terminate(&que);
    return 0;
}
