// bsearch 함수를 사용한 구조체 배열에서의 검색
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

typedef struct {
    char name[10];
    int height;
    int weight;
} Person;

// Person형의 비교 함수(오름차순으로 이름 정렬)
int npcmp(const void * x, const void * y)
{
    Person * xx = (Person *)x;
    Person * yy = (Person *)y;
    return strcmp(xx->name, yy->name);
}

int main()
{
    Person x[] = {
        {"김영준", 179, 79},
        {"박현규", 172, 63},
        {"이수진", 176, 52},
        {"최윤미", 165, 51},
        {"함진아", 181, 73},
        {"홍연의", 172, 84}
    };
    int nx = sizeof(x) / sizeof(x[0]); // 배열 x의 요소 개수
    int retry;
    puts("이름으로 검색합니다");
    do {
        Person tmp, *p;
        printf("이름: ");
        scanf("%s", &tmp.name);
        p = (Person *)bsearch(&tmp, x, nx, sizeof(Person), npcmp);
        if (p==NULL)
            puts("검색에 실패했습니다");
        else {
            puts("검색 성공! 아래 요소를 찾았습니다");
            printf("x[%d]: %s %dcm %dkg\n", (int)(p - x), p->name, p->height, p->weight);
        }
        printf("다시 검색할까요?(1) 예 / (0) 아니오: ");
        scanf("%d", &retry);

    } while(retry == 1);

    return 0;
}