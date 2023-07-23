#include<stdio.h>

char* ft_strcapitalize(char* str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == ' ' && str[i + 1] >= 'a' && str[i + 1] <= 'z')
            str[i + 1] -= 32;
        if ()
        i++;
    }
}

int main()
{
    char* s = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s", ft_strcapitalize(s));
}