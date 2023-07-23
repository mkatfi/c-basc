/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:26:00 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/10 18:14:06 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int ft_strlen(char* s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return(i);
}

int ft(char* s1, char* s2)
{
    int i;
    int j;
    int k;

    i = 0;
    while (s1[i])
        i++;
    i--;
    j = 0;
    while (s2[j])
        j++;
    j--;
    while (i >= 0 && j >= 0)
    {
        if (s1[i] != s2[j])
            return(0);
        j--;
        i--;
    }
    return(1);
}

#include<stdio.h>

int main(int c, char **v)
{
    printf("%d", ft(v[1], v[2]));

}