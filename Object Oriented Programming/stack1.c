// #include <stdio.h>

// void push(int *stk, int *top) {
//     int data;
//     printf ("Enter data: ");
//     scanf("%d", &data);
//     stk[++(*top)] = data;

// }

// int pop(int *stk, int *top) {
//     int data;
//     data = stk[(*top)--];
//     return data;

// }

// void display(int *stk, int *top) {
//     int i;
//     for (i=(*top); i>=0; i--) {
//         printf ("%d\n", stk[i]);
//     }

// }

// int main() {
//     int stack[10];
//     int top = -1;
//     int choice;
//     char ch;

//     do {
//         printf ("1. Push\n2. Pop\n3. Display");
//         printf ("\nEnter your choice: ");
//         scanf("%d", &choice);
//         switch(choice) {
//             case 1: {
//                 printf ("Inserting data in stack: \n");
//                 push(&stack, &top);
//                 break;
//             }
//             case 2: {
//                 printf ("Data out from stack: \n");
//                 pop(&stack, &top);
//                 break;
//             }
//             case 3: {
//                 printf("Displaying data in stack: \n");
//                 display(&stack, &top);
//                 break;
//             }
//             default: {
//                 printf ("Invalid choice");
//             }
//         }
//         printf("\nDo you want to continue? Y/N: ");
//         scanf("%s", &ch);

//     } while(ch=='Y');

//     return 0;
// }
// #include <stdio.h>

// void push(int *stk, int *top)
// {
//     int data;
//     printf("\nEnter a number: ");
//     scanf("%d", &data);
//     stk[++*top] = data;
// }

// int pop(int *stk, int *top)
// {
//     int data;
//     data = stk[*top];
//     *top = *top - 1;

//     return data;
// }

// void display(int *stk, int *top)
// {
//     int i;
//     for (i = *top; i >= 0; i--)
//         printf("%d\n", stk[i]);
// }

// int main()
// {
//     int stack[10];
//     int top = -1;
//     int choice;
//     char ch;

//     do
//     {
//         printf("1. Push\n2. Pop\n3. Display");
//         printf("\nEnter your choice: ");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//         case 1:
//         {
//             if(!IsFull(&top))
//             {
//             // printf("Inserting data in stack: \n");
//             push(&stack, &top);
//             }
//             else
//             {
//                 printf("Stack is full");
//             }
//             break;
//         }
//         case 2:
//         {   
//             if(!IsEmpty(&top))
//             {
//             // printf("Data out from stack: \n");
//             pop(&stack, &top);
//             }
//             else
//             {
//                 printf("Stack is empty");
//             }
//             break;
//         }
//         case 3:
//         {
//             printf("Displaying data in stack: \n");
//             display(&stack, &top);
//             break;
//         }
//         default:
//         {
//             printf("Invalid choice");
//         }
//         }
//         printf("\nDo you want to continue? Y/N: ");
//         scanf("%s", &ch);

//     } while (ch == 'Y' || ch == 'y');

//     return 0;
// }
#include<stdio.h>
void push(int *stk, int *top)
    {
         int data;
         printf("Enter data");
         scanf("%d",&data);
         stk[++*top]=data;
    }
    int pop(int *stk, int *top)
    {
          int data;
          data=stk[*top];
          *top=*top-1;
          return data;
    }
    void display(int *stk, int *top)
     {
      int i;
      printf(" Stack is as Following:\n");
      for(i=*top;i>=0;i--)
      {
          printf("%d\n",stk[i]);

      }
     }
     int IsEmpty(int *top)
        {
               if(*top==-1)
                return 1;
               else
                return 0;
        }
        int IsFull(int *top)
        {
            if(*top==9)
                return 1;
               else
                return 0;
        }

int main()
   {
       int stack[10],top=-1;
       int ch;
       char choice='Y';
       int data;
       do{
       printf("Enter Your Choice :");
       printf("\n 1. Push");
       printf("\n 2.Pop");
       printf("\n 3. Display");
       scanf("%d",&ch);
       switch(ch)
       {
       case 1:
               if(!IsFull(&top))
               {
                   push(&stack,&top);
               }
               else
                printf("\n Stack is Full");
        break;
       case 2:
                 if(!IsEmpty(&top))
                {
                   data=pop(&stack,&top);
                   printf("Poped data =%d",data);
                }
                else
                    printf("Stack is Empty \n");
        break;

       case 3:
                if(!IsEmpty(&top))
                {
                    display(&stack,&top);
                }
                else
                    printf("Stack is Empty \n");
        break;
       default:
        printf("Invalid Choice");

       }
       printf("\n Do you want to continue \n");
       fflush(stdin);
       scanf("%c",&choice);
       }while(toupper(choice)=='Y');

       return 0;

   }