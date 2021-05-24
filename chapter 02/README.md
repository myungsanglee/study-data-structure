﻿# 02-1 배열
* 자료구조 
    + 데이터 단위와 데이터 자체 사이의 물리적 또는 논리적인 관계
    + 데이터를 효율적으로 이용할 수 있도록 컴퓨터에 저장하는 방법
* 배열
    + 배열은 같은 자료형의 변수로 이루어진 요소(element)가 모여 직선 모양으로 줄지어 있는 자료구조
    + 요소의 인덱스는 0부터 시작
* 배열의 자료형
    + 자료형이 Type이고 요소 개수가 n인 배열의 자료형은 Type[n]으로 나타낸다
    + ex) int a[5]인 배열 a의 자료형은 int[5]형이다
* C 언어의 메모리 구조
    + 프로그램을 실행하면 운영체제는 프로그램이 사용할 메모리 영역을 할당한다. 할당하는 메모리 영역은 크게 데이터(Data), 스택(Stack), 힙(Heap) 영역으로 나누어진다
    + 할당 시기: 프로그램이 실행될 때마다 할당
    + 할당 장소: 메인 메모리(RAM)
    + 할당 용도: 프로그램 실행에 필요한 메모리 영역 할당
    + 데이터(Data) 영역
        + 전역 변수와 정적(static) 변수가 할당되는 영역
        + 프로그램을 시작하면 할당하고, 프로그램을 종료하면 메모리에서 해제
    + 스택(Stack) 영역
        + 함수 호출 시 생성되는 지역 변수와 매개변수가 저장되는 영역
        + 함수 호출이 완료되면 사라짐
    + 힙(Heap) 영역
        + 필요에 따라 동적으로 메모리를 할당
* 포인터
    + 객체(변수) 또는 함수를 가리키는 것
* 포인터와 배열 (int a[5]; int * p = a; 일 때)
    + 아래 4개의 식은 모두 배열의 각 요소에 접근하는 식이다
        + a[i], *(a + i), p[i], *(p + i) (첫 번째부터 i개 뒤쪽의 요소)
    + 아래 4개의 식은 배열의 각 요소를 가리키는 포인터이다
        + &a[i], a + i, &p[i], p + i (첫 번째부터 i개 뒤쪽의 요소를 가리키는 포인터)
    + 포인터가 배열의 첫 번째 요소를 가리키는 경우 그 포인터는 마치 배열처럼 동작할 수 있다
* 난수
    + 컴퓨터에서의 난수는 의사 난수이다 컴퓨터가 미리 계산해 놓은 값일 뿐이다
    + seed 값이 같으면 계속 같은 난수 값이 나온다 따라서 보통 seed 값을 항상 다르게 주기 위해 현재 시간을 이용하는 것이 일반적이다
* 함수 형식 매크로
    + 프로그램을 컴파일하는 과정에서 그대로 치환된다
    + do while 문으로 작성 -> 컴파일 오류 피하기 위해
* 기수
    + 수를 나타내는 데 기초가 되는 수로, 10진법에서는 0에서 9까지의 정수를 말한다
* 정수 상수
    + 정수 계열의 값을 나타내는 10진수, 8진수, 16진수이다 정수 상수는 변경할 수 없는 정수 값을 나타낼 때 사용한다
    + 0x로 시작하면 16진수, 숫자 0으로 시작하면 8진수이다
* 소수
    + 2부터 n - 1까지의 어떤 정수로도 나누어떨어지지 않는다
    + 2부터 n - 1까지의 어떤 소수로도 나누어떨어지지 않는다
    + n의 제곱근 이하의 어떤 소수로도 나누어떨어지지 않는다
* 윤년
    + 4의 배수 가운데 100의 배수를 제외하고, 제외한 100의 배수 가운데 400의 배수를 다시 포함시키면 된다

# 02-2 구조체
* 구조체
    + 임의의 자료형의 요소를 조합하여 다시 만든 자료구조
* 
    + 
* 
    + 
* 
    + 
* 
    + 
* 
    + 
* 
    + 
* 
    + 
* 
    + 
* 
    + 
* 
    + 