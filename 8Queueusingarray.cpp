#include <stdio.h>
#define MAXSIZE 10
int queue[MAXSIZE];
int front = -1;
int rear = -1;
int size = -1;
int isempty()
{
    return size<0;
}
int isfull()
{
    return size == MAXSIZE;
}
void enqueue(int value)
{
    if(size<MAXSIZE)
    {
        if(size<0)
        {
            queue[0] = value;
            front = rear = 0;
            size = 1;
        }
        else if(rear == MAXSIZE-1)
        {
            queue[0] = value;
            rear = 0;
            size++;
        }
        else
        {
            queue[rear+1] = value;
            rear++;
            size++;
        }
    }
    else
    {
        printf("Queue is full\n");
    }
}

int dequeue()
{
    if(size<0)
    {
        printf("Queue is empty\n");
    }
    else
    {
        size--;
        front++;
    }
}

int Front()
{
    return queue[front];
}

void display()
{
    int i;
    if(rear>=front)
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }
    }
    else
    {
        for(i=front;i<MAXSIZE;i++)
        {
            printf("%d ",queue[i]);
        }
        for(i=0;i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }
    }
    printf("\n");
}
int main()
{
	printf("18B95A0231\n");
    enqueue(4);
    enqueue(8);
    enqueue(10);
    display();
    dequeue();
    display();
    return 0;
}

