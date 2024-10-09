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
void input1(struct complex *y)
{
    printf("Enter real part: ");
    scanf("%d", &y->real);
    printf("Enter imaginary part: ");
    scanf("%d", &y->imag);
}
void multiply(struct complex *x, struct complex *y, struct complex *z)
{
    z->real = (x->real * y->real) - (x->imag * y->imag);
    z->imag = (x->imag * y->real) + (x->real * y->imag);
}
void add(struct complex *x, struct complex *y, struct complex *z)
{
    z->real = x->real + y->real;
    z->imag = x->imag + y->imag;
}
void display(struct complex z)
{
    printf("The complex number is %d + %di\n", z.real, z.imag);
}
int main()
{
    struct complex x, y, z;
    input(&x);
    input1(&y);
    add(&x, &y, &z);
    display(z);
    multiply(&x, &y, &z);
    display(z);
    return 0;
}
