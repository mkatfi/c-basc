#include<stdio.h>
void ft_ultimate_div_mod(int* a, int* b)
{
    int div, mod;

    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
}
int main()
{
    int a, b;
    a = 2;
    b = 5;
    ft_ultimate_div_mod(&a, &b);
    printf("%d %d", a, b);
}