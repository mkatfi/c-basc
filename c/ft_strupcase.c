#include<stdio.h>

char* ft_strupcase(char* str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i]<= 'z')
            str[i] -= 32;
        i++;
    }
    str[i] = '\0';
    return(str);
}

int main()
{
    char const s[] = "hello";
    printf("%s", ft_strupcase(s));
}
