#include <stdio.h>
int main(){
    // int x=100;
    // int *p=&x;
    // int **p1=&p;
    // printf("Value of x= %d",x);
    // printf("\nAddress of x= %d",p);
    // printf("\nptr points to =%d",*p);
    // printf("\nAddress of p= %d",p1);
    // printf("\nptr points to =%d",*p1);
    int a=1;
    int b=2;
    // int *const ptr=&a;
    // ptr=&b;
    // printf("value of ptr is: %d",*ptr);
    const int* ptr;
    ptr=&a;
    ptr=&b;
    printf("value of ptr: %d",*ptr);
    return 0;
}