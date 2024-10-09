#include <stdio.h>
void push(int *skt,int *top)
{

}
int pop(int *skt,int *top)
{
    int data;
    return data;
}
void display(int *skt,int *top)
{}
void main(){
    int stack[10];
    int top=-1;
    int choice;
    char ch;
    do{
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push(stack,&top);
                    break;
            case 2: pop(stack,&top);
                    break;
            case 3: display(stack,&top);
                    break;
            default: printf("Invalid choice\n");
        }
        printf("Do you want to continue? (y/n): ");
        scanf(" %c",&ch);
} while(ch=='y');
}