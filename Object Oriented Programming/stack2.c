#include <stdio.h>

void push(char *st, int *top, char data) {
    st[++*top] = data;
}

char pop (char *st, int *top) {
    char data;
    data = st[*top];
    *top = *top-1;
    return data;
}

void display(char *st, int *top) {
    int i;
    printf("Stack is as Following:\n");
    for (i = *top; i >= 0; i--)
    {
        printf("%c\n", st[i]);
    }
}

int main() {
    int top =-1;
    char str[20];
    char revstr[20];
    int data;
    int choice;
    char ch;
    int i;

    printf ("Enter a string: ");
    gets(str);

    for (i=0; i<strlen(str); i++) {
        push(&str, &top, str[i]);
    }
    display(&str, &top);

    for (i=0; i<strlen(str); i++) {
        revstr[i] = pop(&str, &top);
    }
    revstr[i] = NULL;
    printf ("Reverse of %s is %s", str, revstr);


    return 0;
}