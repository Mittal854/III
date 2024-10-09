#include <stdio.h>
#include <stdlib.h>
void Enqueue(int queue[],int *rear)
{
    int data;
    printf("\nEnter the no. : ");
    scanf("%d",&data);
    queue[*rear]=data;
    *rear+=1;
}
void Dequeue(int queue[],int *front,int *rear)
{
    if(*rear==*front)
    {
        printf("\nQueue is empty");
    }
    else{
        printf("Deleted element is : %d\n",queue[*front]);
        *front+=1;
    }
}
void Display(int queue[],int *front,int *rear)
{
    if(*rear==*front)
    {
        printf("\nQueue is empty");
    }
    else{
        printf("\nQueue is: ");
        for(int i=*front;i<*rear;i++)
        {
            printf("%d ",queue[i]);
        }
    }
}
int main()
{
    int choice;
    int queue[100];
    int front = 0, rear = 0;
    while (1)
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Display queue\n4.Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            Enqueue(queue,&rear);
            break;
            case 2:
            Dequeue(queue,&front,&rear);
            break;
            case 3:
            Display(queue,&front,&rear);
            break;
            case 4:
            exit(0);
            break;
            default:
            printf("\nInvalid choice");
            break;
        }
    }
    return 0;
}