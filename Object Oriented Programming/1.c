#include <stdio.h>
int main(){
    // int a=10;
    // int *ptr=&a;
    // printf("Size of a = %d ",sizeof(a));
    // printf("\nSize of ptr = %d",sizeof(ptr));
    // return 0;
    int arr[5]={11,12,13,14,15};
    printf("Address of arr %p \n",arr);
    printf("Value using index of arr %d\n",arr[0]);
    printf("using & operator address of arr %p\n",&arr+1);
    printf("using derefernce operator value of arr %d\n",*arr);
    return 0;
}