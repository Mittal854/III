#include<stdio.h>
#include<string.h>

void push(char *st, int *top,char data)
    {
        st[++*top]=data;
    }
    char pop(char *st,int *top)
    {
        char data;
        data=st[*top];
        *top=*top-1;
        return data;
    }

    void display(char *st, int *top)
       {
          int i;
          for(i=*top;i>=0;i--)
          {
              printf("%c\n",st[i]);
          }

       }



        int IsFull(int *top)
            {
                if(*top==9)
                    return 1;
                else
                    return 0;
            }
            int IsEmpty(int *top)
            {
               if(*top==-1)
                return 1;
               else
                return 0;

            }




int main()
{
    char stk[100];
    char str[20];
    char revstr[20];
    int top=-1;
    char data;
    int choice;
    char ch;
    int i;
    int flag=0;
    printf("Enter An Expression");
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
            {
                push(&stk,&top,str[i]);
            }
            if(str[i]==')' || str[i]=='}' || str[i]==']')
                 {
                     data=pop(&stk,&top);

                 }

                 if(str[i]==')' && data=='(')
                 {
                     flag=1;
                 }
                 else
                 if(str[i]=='}' && data=='{')
                    {
                        flag=1;
                    }
                     else
                 if(str[i]==']' && data=='[')
                    {
                        flag=1;
                    }

    }

               if(flag==1)
               {
                   printf("Brackets are balanced and in Order");
               }
               else
               {
                   printf("Brackets are not balanced or not in order");
               }

    return 0;
}