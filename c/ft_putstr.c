#include<stdio.h>
#include<unistd.h>

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, str + i, 1);
        i++;
    }
}

int main()
{
    char s[] = "hello";
    // ft_putstr("hello world\n");
    int i = 122;
    
    write(1, &i, 4);
    
    write(1, "ff\n", 3);
}