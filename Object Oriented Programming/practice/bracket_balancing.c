
#include<stdio.h>
#include<stdlib.h>
int b1(char arr[])
{
    int c1=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]=='(')                                
        {
            c1+=1;
        }
        if(c1>0)
        {
        if(arr[i]==')')
        {
            c1-=1;
        }}
    }
    return c1;
}
int b2(char arr[])
{
    int c1=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]=='[')
        {
            c1+=1;
        }
        if(c1>0)
        {
         if(arr[i]==']')
        {
            c1-=1;
        }}
    }
    return c1;
}
int b3(char arr[])
{
    int c1=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]=='{')
        {
            c1+=1;
        }
        if(c1>0)
        {
        
        if(arr[i]=='}')
        {
            c1-=1;
        }}
    }
    return c1;
}
int main()
{   int c1,c2,c3;
    char arr[50];
    printf("Enter an exp: ");
    scanf("%s",&arr);
    c1=b1(arr);
    c2=b2(arr);
    c3=b3(arr);
    if(c1==0 && c2==0 && c3==0)
    {
        printf("\nExpression is balanced\n");
    }
    else
    {
        printf("\nExpression is not balanced\n");
    }
}