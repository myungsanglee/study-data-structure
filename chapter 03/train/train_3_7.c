// bsearch �Լ��� ����� ����ü �迭������ �˻�
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

typedef struct {
    char name[10];
    int height;
    int weight;
} Person;

// Person���� �� �Լ�(������������ �̸� ����)
int npcmp(const void * x, const void * y)
{
    Person * xx = (Person *)x;
    Person * yy = (Person *)y;
    return strcmp(xx->name, yy->name);
}

int main()
{
    Person x[] = {
        {"�迵��", 179, 79},
        {"������", 172, 63},
        {"�̼���", 176, 52},
        {"������", 165, 51},
        {"������", 181, 73},
        {"ȫ����", 172, 84}
    };
    int nx = sizeof(x) / sizeof(x[0]); // �迭 x�� ��� ����
    int retry;
    puts("�̸����� �˻��մϴ�");
    do {
        Person tmp, *p;
        printf("�̸�: ");
        scanf("%s", &tmp.name);
        p = (Person *)bsearch(&tmp, x, nx, sizeof(Person), npcmp);
        if (p==NULL)
            puts("�˻��� �����߽��ϴ�");
        else {
            puts("�˻� ����! �Ʒ� ��Ҹ� ã�ҽ��ϴ�");
            printf("x[%d]: %s %dcm %dkg\n", (int)(p - x), p->name, p->height, p->weight);
        }
        printf("�ٽ� �˻��ұ��?(1) �� / (0) �ƴϿ�: ");
        scanf("%d", &retry);

    } while(retry == 1);

    return 0;
}