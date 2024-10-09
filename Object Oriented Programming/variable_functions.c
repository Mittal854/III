#include <stdio.h>
#include<stdarg.h> //to access variable length arguments

int add(int num, ...)
{
    int i, sum = 0;
    va_list args_list;
    va_start (args_list,num);
    for(i=0;i<num;i++)
    {
        sum+=va_arg(args_list,int);
    }
    va_end(args_list);
    return sum;

}
int mul(int num, ...)
{
    int i,prod=1;
    va_list args_list;
    va_start(args_list,num);
    for(i=0;i<num;i++)
    {
        prod*=va_arg(args_list,int);
    }
    va_end(args_list);
    return prod;
}
int main(){
    printf("\n Result %d",add(2,3,4));
    printf("\n Result %d",add(3,3,4,5));
    printf("\n Result %d",add(4,2,3,4,5));
    printf("\n Result %d",add(5,1,2,3,4,5));
    printf("\n Result %d",mul(2,3,4));
    printf("\n Result %d",mul(3,3,4,5));
    printf("\n Result %d",mul(4,2,3,4,5));
    printf("\n Result %d",mul(5,1,2,3,4,5));
    return 0;
}