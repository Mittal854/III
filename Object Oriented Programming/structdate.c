#include <stdio.h>
struct dob
{
    int date;
    char month[10];
    int year;
};
void input(struct dob *x)
{
    printf("enter date: ");
    scanf("%d", &x->date);
    printf("enter month: ");
    scanf("%s", &x->month);
    printf("enter year: ");
    scanf("%d", &x->year);
}
void display(struct dob x)
{
    printf("The date of birth is %d %s %d\n", x.date, x.month, x.year);
}
int main()
{
    struct dob(x);
    input(&x);
    display(x);
    return 0;
}
