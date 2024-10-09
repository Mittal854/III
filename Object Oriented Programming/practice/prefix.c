#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void push(int stack[], int *top, int data)
{
    stack[++*top]=data;
}
int pop(int stack[],int *top)
{
    int data=0;
    data=stack[*top];
    *top=*top-1;
    return data;
}
int main()
{   int stack[100];
    char exp[100];
    int top=-1;
    int num1,num2,res;
    printf("Enter an exp: ");
    gets(exp);
    for(int i=strlen(exp)-1;i>=0;i--)
    {
        if(isdigit(exp[i]))
        {
            push(stack,&top,exp[i]-'0');
        }
        else{
            num1=pop(stack,&top);
            num2=pop(stack,&top);
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
            push(stack,&top,res);
        }
    }
    res=pop(stack,&top);
    printf("Sol is: %d",res);
    return 0;
}