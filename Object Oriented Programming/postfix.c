#include <stdio.h>
#include <string.h>
void push(int *st, int *top, int data)
{
    st[++*top] = data;
}
int pop(int *st, int *top)
{
    int data;
    data = st[*top];
    *top = *top - 1;
    return data;
}
int main(){
    int stack[100];
    int top = -1;
    int ch;
    char choice='Y';
    char data;
    char exp[20];
    int i;
    int num1,num2,res;
    printf("Enter an expression ");
    gets(exp);
    for ( i = 0; i < strlen(exp); i++)
    {
        if(isdigit(exp[i]))
        {
            push(&stack,&top,exp[i]-'0');
        }
    
    else{
        num2=pop(&stack,&top);
        num1=pop(&stack,&top);
        switch(exp[i])
        {
            case '+':
            res=num1+num2;
            break;
            case '-':
            res=num1-num2;
            break;
            case '*':
            res=num1*num2;
            break;
            case '/':
            res=num1/num2;
            break;
            case '%':
            res=num1%num2;
            break;
        }
        push(&stack,&top,res);

    }
    }
    res=pop(&stack,&top);
    printf("Result is %d",res);
    return 0;
}