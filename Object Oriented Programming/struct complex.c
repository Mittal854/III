#include <stdio.h>
struct complex
{
    int real;
    int imag;
};
void input(struct complex *x)
{
    printf("Enter real part: ");
    scanf("%d", &x->real);
    printf("Enter imaginary part: ");
    scanf("%d", &x->imag);
}
void display(struct complex x)
{
    printf("The complex number is %d + %di\n", x.real, x.imag);
}
int main()
{
    struct complex c1;
    input(&c1);
    display(c1);
    return 0;
}
