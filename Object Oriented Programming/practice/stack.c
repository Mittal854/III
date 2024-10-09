#include <stdio.h>
#include<stdlib.h>
void push(int arr[], int *top)
{   int data;
    if (*top == 9)
    {
        printf("\nStack is full");
    }
    else
    {
        printf("\nEnter the no. : ");
        scanf("%d",&data);
        *top=*top+1;
        arr[*top]=data;
    }
}
void pop(int arr[], int *top)
{
    if (*top == -1)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\nDeleted Element is: %d", arr[*top]);
        *top = *top - 1;
    }
}
void display(int arr[], int *top)
{
    if (*top == -1)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\nStack is:\n");
        for (int i = *top; i >= 0; i--)
        {
            printf("%d ", arr[i]);
        }
    }
}
int main()
{
    int arr[10];
    int top = -1;
    int choice;
    while(1){
    printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        push(arr, &top);
        break;
    case 2:
        pop(arr, &top);
        break;
    case 3:
        display(arr, &top);
        break;
    case 4:
        exit(0);
        break;
    default:
        printf("Invalid choice");
        break;
    }
    }
    return 0;
}