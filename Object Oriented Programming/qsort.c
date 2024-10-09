#include <stdio.h>
#include<stdlib.h>
int compare(const void* num1, const void* num2)
{
    int a=*(int*) num1;
    int b=*(int*) num2;
    if(a>b)
    {
        return 1;
    }
    else if(b>a)
    {
        return -1;
    }
}
int main(){
    int arr[50],n,i;
    printf("Enter the size ");
    scanf("%d",&n);
    printf("Enter the elements ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),compare);
    printf("\nThe sorted array: ");
    printf("\n[");
    for(i=0;i<n;i++)
    {
        if(i==n-1)
        {
            printf("%d",arr[i]);
            break;
        }
        printf("%d, ",arr[i]);
    }
    printf("]");
    return 0;
}