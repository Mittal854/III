#include <stdio.h>
int add(int a,int b){
    int c=a+b;
    return c;
}

int main(){
    int a,b;
    int (*ip)(int ,int);
    int result;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a,&b);
    ip=add;
    result=(*ip)(a,b);
    printf("Value after addition is: %d",result);

    return 0;
}