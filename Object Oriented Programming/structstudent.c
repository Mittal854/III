#include <stdio.h>
struct dob
{
    int d;
    char m[20];
    int y;
};
struct student
{
    int roll;
    char name[20];
    struct dob dob1;
};
// struct student                 //embedded structure
// {
//     int roll;
//     char name[20];
//     struct date{
//         int d;
//         char m[20];
//         int y;
//     }
// };
void input(struct student *x)
{
    printf("enter roll: ");
    scanf("%d", &x->roll);
    printf("enter name: ");
    scanf("%s", &x->name);
    printf("enter dob: ");
    scanf("%d %s %d", &x->dob1.d, &x->dob1.m, &x->dob1.y); // nested structure
}
void display(struct student *x)
{
    printf("The roll no. is %d\n", x->roll);
    printf("The name is %s\n", x->name);
    printf("The dob is %d %s %d\n", x->dob1.d, x->dob1.m, x->dob1.y);
}
int main()
{
    struct student(x);
    input(&x);
    display(&x);
    return 0;
}