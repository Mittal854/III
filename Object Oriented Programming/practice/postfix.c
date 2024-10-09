#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
void push(int *stack, int *top, int data)
{
    stack[++*top] = data;
}
int pop(int *stack, int *top)
{
    int data = 0;
    data = stack[*top];
    *top = *top - 1;
    return data;
}
int main()
{
    int stack[100];
    char exp[100];
    int top = -1;
    int num1, num2;
    int res;
    printf("Enter an exp: ");
    gets(exp);
    for (int i = 0; i < strlen(exp); i++)
    {
        if ((exp[i])>='0' && exp[i]<='9')
        {
            push(stack, &top, exp[i] - '0');
        }
        else
        {
            num2 = pop(stack, &top);
            num1 = pop(stack, &top);
            switch (exp[i])
            {
            case '+':
                res = num1 + num2;
                break;
            case '-':
                res = num1 - num2;
                break;
            case '*':
                res = num1 * num2;
                break;
            case '/':
                res = num1 / num2;
                break;
            case '%':
                res = num1 % num2;
                break;
            }
            push(stack, &top, res);
        }
    }
    res = pop(stack, &top);
    printf("\nSol is: %d", res);
    return 0;
}