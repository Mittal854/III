#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void enqueue(int queue[],int *front,int *rear)
{
    if((*rear+1)%10==*front)
    {
        printf("\nQueue is full\n");
    }
    else{
        printf("\nEnter the no: ");
        scanf("%d",&queue[*rear % 10]);
        *rear=*rear+1;
    }
}
void dequeue(int queue[],int *front,int *rear)
{
    if(*front == *rear)
    {
        printf("\nQueue is empty");
    }
    else{
        printf("\nDeleted element is: %d\n",queue[*front % 10]);
        *front=*front+1;
    }
}
void peek(int queue[],int *front)
{
    printf("\n%d\n",queue[*front % 10]);
}
void display(int queue[],int *front,int *rear)
{
    if(*front == *rear)
    {
        printf("\nQueue is empty");
    }
    else{
        for(int i=*front;i<*rear;i++)
        {
            printf("%d ",queue[i%10]);
        }
        printf("\n");
    }
}
int main()
{
    int queue[100];
    int front=0,rear=0;
    int choice;
    while(1){
    printf("1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        enqueue(queue,&front,&rear);
        break;
        case 2:
        dequeue(queue,&front,&rear);
        break;
        case 3:
        peek(queue,&front);
        break;
        case 4:
        display(queue,&front,&rear);
        break;
        case 5:
        exit(0);
        break;
        default:
        printf("\nInvalid choice");
    }
    }
    return 0;
}

