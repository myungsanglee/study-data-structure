#include <stdio.h>
#include "IntStack.h"

int main(void)
{
    IntStack s;
    if (Initialize(&s, 64) == -1) {
        puts("���� ������ �����Ͽ����ϴ�.");
        return 1;
    }

    while(1) {
        int menu, x;
        printf("���� ������ ��: %d / %d\n", Size(&s), Capacity(&s));
        printf("(1) Ǫ�� (2) �� (3) ��ũ (4) ��� (5) ���� �뷮 (6) ������ �� (7) �˻� (8) Empty? (9) Full? (0) ����: ");
        scanf("%d", &menu);

        if(menu == 0) break;
        switch (menu)
        {
        case 1:
            printf("������: ");
            scanf("%d", &x);
            if (Push(&s, x) == -1)
                puts("\a����: Ǫ�ÿ� �����Ͽ����ϴ�.");
            break;

        case 2:
            if(Pop(&s, &x) == -1)
                puts("\a����: �˿� �����Ͽ����ϴ�.");
            else
                printf("�� �����ʹ� %d�Դϴ�.\n", x);
            break;

        case 3:
            if(Peek(&s, &x) == -1)
                puts("\a����: ��ũ�� �����Ͽ����ϴ�.");
            else
                printf("��ũ �����ʹ� %d�Դϴ�.\n", x);
            break;
        
        case 4:
            Print(&s);
            break;
        
        case 5:
            printf("������ �뷮�� %d�Դϴ�.\n", Capacity(&s));
            break;

        case 6:
            printf("���ÿ� �׿� �ִ� �������� ���� %d�Դϴ�.\n", Size(&s));
            break;

        case 7:
            printf("�˻��� ���ڸ� �Է��ϼ���: ");
            scanf("%d", &x);
            if (Search(&s, x) >= 0) {
                printf("�˻� ����!\n");
            }
            else {
                printf("�˻� ����!\n");
            }
            break;

        case 8:
            if (IsEmpty(&s)) printf("������ ����ֽ��ϴ�.\n");
            else printf("������ ������� �ʽ��ϴ�.\n");
            break;

        case 9:
            if (IsFull(&s)) printf("������ ����á���ϴ�.\n");
            else printf("������ �������� �ʾҽ��ϴ�.\n");
            break;

        default:
            break;
        }
    }
    Terminate(&s);
    return 0;
}
