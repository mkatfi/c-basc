/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revirse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:45:04 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/02 22:05:55 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void revirse(char* str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    i--;
    while (i >= 0)
    {
        write(1, &str[i], 1);
        i--;
    }
}

int main(int ac, char** av)
{
    int i = 0;
    if (ac == 2)
    {
        revirse(av[1]);
    }
}