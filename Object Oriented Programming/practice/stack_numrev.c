#include <stdio.h>
#include <stdlib.h>
void addno(int arr[], int *top)
{
    int data;
    if (*top != -1)
    {
        printf("\nStack is full");
    }
    else
    {
        printf("\nenter the no: ");
        scanf("%d", &data);
        while (data > 0)
        {
            int rem = data % 10;
            arr[++*top] = rem;
            data = data / 10;
        }
    }
    printf("\n");
}
void remno(int arr[], int *top)
{
    if (*top == -1)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("Deleted no are: ");
        for (int i = *top; i >= 0; i--)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    *top = -1;
}
void display(int arr[], int *top)
{
    if (*top == -1)
    {
        printf("\nStack is empty\n");
    }
    else
    {
        printf("\n");
        for (int i = 0; i <= *top; i++)
        {
            printf("%d", arr[i]);
        }
        printf("\n");
    }
}
int main()
{
    int arr[100];
    int top = -1;
    int num;
    int choice;
    while (1)
    {
        printf("1.Add no.\n2.Remove no.\n3.Display rev no.\n4.Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addno(arr, &top);
            break;
        case 2:
            remno(arr, &top);
            break;
        case 3:
            display(arr, &top);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice");
            break;
        }
    }
    return 0;
}