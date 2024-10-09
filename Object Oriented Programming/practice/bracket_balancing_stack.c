#include <stdio.h>
#include<string.h>
int Balanced(char str[])
{
    char stack[100];
    int top=-1;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
        {   top++;
            stack[top]=str[i];
        }
        else if(str[i]==')' || str[i]=='}' || str[i]==']')
        {
            if(top==-1)
            {
                return 0;
            }
            else{
                char b=stack[top];
                if((str[i]==')' && b!='(') ||(str[i]=='}' && b!='{') || (str[i]==']' && b!='['))
                {
                    return 0;
                }
                top--;
            }
        }
    }
    return (top==-1)?1:0;
}
int main(){
    char str[100];
    int res;
    printf("Enter an exp: ");
    scanf("%s",str);
    res=Balanced(str);
    if(res==0)
    {
        printf("\nUnBalanced brackets");
    }
    else{
        printf("\nbalanced");
    }
    return 0;
}

// #include <stdio.h>
// #include <string.h>
// #define MAX 40

// char stack[MAX];
// int top = -1;

// void push(char s) {
//     top++;
//     stack[top] = s;
// }

// char pop() {
//     char value = stack[top];
//     top--;
//     return value;
// }

// int main() {
//     char str[MAX];
//     printf("Enter a string for brackets: ");
//     scanf("%s", str);

//     for (int i = 0; i < strlen(str); i++) {
//         if (str[i] == '(' || str[i] == '[' || str[i] == '{')
//             push(str[i]);
//         else if (str[i] == ')' || str[i] == ']' || str[i] == '}') {
//             if (top == -1) {
//                 printf("Unbalanced brackets\n");
//                 return 0;
//             }
//             char brac = pop();
//             if ((str[i] == ')' && brac != '(') ||
//                 (str[i] == ']' && brac != '[') ||
//                 (str[i] == '}' && brac != '{')) {
//                 printf("Unbalanced brackets\n");
//                 return 0;
//             }
//         }
//     }

//     if (top == -1) {
//         printf("Balanced brackets\n");
//     } else {
//         printf("Unbalanced brackets\n");
//     }

// return 0;
// }
