#include <stdio.h>
#include <stdlib.h>
#include <IntQueue.h>

/* ť �ʱ�ȭ */
int Initialize(IntQueue *q, int max)
{
    q->num = q->front = q->rear = 0;
    if((q->que = (int *)calloc(max, sizeof(int)) == NULL)) {
        q->max = 0;
        return -1;
    }
    q->max = max;
    return 0;
}

/* ��ť */
int Enque(IntQueue *q, int x) 
{
    if(q->num >= q->max)
        return -1; // ť�� ������
    else {
        q->num++;
        q->que[q->rear++] = x;
        if(q->rear == q->max)
            q->rear = 0;
        return 0;
    }
}

/* ��ť */
int Deque(IntQueue *q, int *x)
{
    if(q->num <= 0)
        return -1;
    else {
        q->num--;
        *x = q->que[q->front++];
        if (q->front == q->max) 
            q->front = 0;
        return 0;
    }
}

/* ��ũ */
int Peek(const IntQueue *q, int *x);

/* ��� ������ ���� */
void Clear(IntQueue *q);

/* ť�� �ִ� �뷮 */
int Capacity(const IntQueue *q);

/* ť�� ����� �������� ���� */
int Size(const IntQueue *q);

/* ť�� ��� �ִ°�? */
int IsEmpty(const IntQueue *q);

/* ť�� ���� á�°�? */
int IsFull(const IntQueue *q);

/* ť���� �˻� */
int Search(const IntQueue *q, int x);

/* ��� ������ ��� */
void Print(const IntQueue *q);

/* ť ���� */
void Terminate(IntQueue *q);
