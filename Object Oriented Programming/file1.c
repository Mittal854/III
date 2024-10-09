#include <stdio.h>
int main(){
    FILE *fp;
    int num[10];
    int i;
    for(i=0;i<=9;i++)
    {
        printf("Enter a number: ");
        scanf("%d",&num[i]);
    }
    fp=fopen("D:/chitkara/oops/num.txt","w");
    for(i=0;i<=9;i++)
    {
        fprintf(fp,"%d\n",num[i]);
    }
    fclose(fp);
    return 0;
}