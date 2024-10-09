#include <stdio.h>
#include<stdlib.h>
void main(){
    FILE * fp;
    char ch;
    fp=fopen("D:/chitkara/oops/qsort.c", "r");
    while (1)
    {
        ch=fgetc(fp);
        if (ch==EOF)
        break;
        printf("%c",ch);
    }
    fclose(fp);
}