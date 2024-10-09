#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int prec(char data)
{
    if (data == '*' || data == '/')
    {
        return 2;
    }
    else if (data == '+' || data == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void intopo(char exp[], char post[])
{
    char stack[100];
    int top = -1;
    int j = 0;
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] != '+' && exp[i] != '-' && exp[i] != '*' && exp[i] != '/')
        {
            post[j] = exp[i];
            j++;
        }
        else
        {
            while (top > -1 && prec(exp[i]) <= prec(stack[top]))
            {
                post[j] = stack[top];
                j++;
                top--;
            }
            top++;
            stack[top] = exp[i];
        }
    }
    for (int i = top; i >= 0; i--)
    {
        post[j] = stack[i];
        j++;
    }
    post[j] = '\0';
}
int main()
{
    char exp[100];
    char post[100];
    printf("Enter an exp: ");
    gets(exp);
    intopo(exp, post);
    printf("%s", post);
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct stack
// {
//     int size;
//     int top;
//     char *arr;
// };

// int stackTop(struct stack* sp){
//     return sp->arr[sp->top];
// }

// void push(struct stack *ptr, char data) {
//     ptr->top++;
//     ptr->arr[ptr->top] = data;
// }

// char pop (struct stack *ptr) {
//     char data = ptr->arr[ptr->top];
//     ptr->top--;
//     return data;
// }

// int isEmpty (struct stack *ptr) {
//     if (ptr->top==-1)
//         return 1;
//     else
//         return 0;
// }

// char isOperator(char ch) {
//     return ch=='+' || ch=='-' || ch=='*' || ch=='/';
// }

// int precedence (char operator) {
//     switch(operator) {
//         case '+':
//         case '-':
//             return 1;
//         case '*':
//         case '/':
//             return 2;
//         default:
//             return -1;
//     }
// }

// char* infixToPostfix(char* infix){
//     struct stack * sp = (struct stack *) malloc(sizeof(struct stack));
//     sp->size = 10;
//     sp->top = -1;
//     sp->arr = (char *) malloc(sp->size * sizeof(char));
//     char * postfix = (char *) malloc((strlen(infix)+1) * sizeof(char));
//     int i=0; // Track infix traversal
//     int j = 0; // Track postfix addition
//     while (infix[i]!='\0')
//     {
//         if(!isOperator(infix[i])){
//             postfix[j] = infix[i];
//             j++;
//             i++;
//         }
//         else{
//             if(precedence(infix[i])> precedence(stackTop(sp))){
//                 push(sp, infix[i]);
//                 i++;
//             }
//             else{
//                 postfix[j] = pop(sp);
//                 j++;
//             }
//         }
//     }
//     while (!isEmpty(sp))
//     {
//         postfix[j] = pop(sp);
//         j++;
//     }
//     postfix[j] = '\0';
//     return postfix;
// }

// int main() {
//     char infix[50];
//     printf ("Enter an expression: ");
//     gets(infix);

//     printf ("Postfix expression is: %s", infixToPostfix(infix));

//     return 0;
// }