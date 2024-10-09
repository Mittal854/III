#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void push(int stack[],int *top,int data)
{
    stack[++*top]=data;
}
int pop(int stack[], int *top)
{
    int data;
    data=stack[*top];
    *top=*top-1;
    return data;
}
int prec(char ch)
{
    if(ch=='*' || ch=='/')
        return 2;
    else if(ch=='+' || ch=='-')
        return 1;
    else
        return 0;        
}
int stacktop(int *top)
{
    return *top;
}
int main()
{   
    char stack[100];
    char exp[100];
    int top=-1;
    char postfix[100];
    int j=0;
    printf("Enter your exp: ");
    gets(exp);
    for(int i=0;i<strlen(exp)-1;i++)
    {   if(exp[i]!='+' || exp[i]!='-' || exp[i]!='*' || exp[i]!='/' )
        {
        postfix[j]=exp[i];
        j++;
        }
        else{
            if(prec(exp[i])>prec(stack[top]))
            {
                stack[++top]=exp[i];
            }
            else{
                postfix[j]=stack[top];
                top--;
                j++;
            }
        }

    }
    for(int i=0;i<strlen(exp);i++)
    {
        postfix[j]=stack[i];
        j++;
    }
    postfix[j]='\0';
    for(int k=0;k<j;k++)
    {
        printf("%c",postfix[k]);
    }
    return 0;
}