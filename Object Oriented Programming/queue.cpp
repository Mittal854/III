#include<iostream>
using namespace std;
void Enqueue(int queue[],int *rear)
{
    int data;
    cout<<"Enter the data: ";
    cin>>data;
    queue[*rear]=data;
    *rear=*rear+1;
}
void Dequeue(int queue[],int *front)
{
    if(*front==0)
    {
        cout<<"Queue is empty\n";
    }
    else
    {
        cout<<"Deleted element is: "<<queue[*front];
        *front=*front+1;
    }
}
void Display(int queue[],int *front,int *rear)
{
    if(*front==*rear)
    {
        cout<<"Queue is empty\n";
    }
    else
    {
        cout<<"Queue elements are: ";
        for(int i=*front;i<*rear;i++)
        {
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
}
void Peek(int queue[],int *front,int *rear)
{
    if(*front==*rear)
    {
        cout<<"Queue is empty\n";
    }
    else
    {
        cout<<"Peek element is: "<<queue[*front];
    }
}
int main(){
    int choice;
    int queue[100];
    int front=0,rear=0;
    while(true)
    {
        cout<<"1.Enqueue\n2.Dequeue\n3.Display\n4.Peek\n5.Exit\nEnter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            Enqueue(queue,&rear);
            break;
            case 2:
            Dequeue(queue,&front);
            break;
            case 3:
            Display(queue,&front,&rear);
            break;
            case 4:
            Peek(queue,&front,&rear);
            break;
            case 5:
            exit(0);
            default:
            cout<<"Invalid choice\n";
            break;
        }
    }
    return 0;
}