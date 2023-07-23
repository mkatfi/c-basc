/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast_word.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:38:25 by mkatfi            #+#    #+#             */
/*   Updated: 2023/02/19 12:05:16 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int i, j;

	i = 0;
	// while (av[1][i])
    //     i++;
    // i--;
    // while (av[1][i] == ' ')
	// 	i--;
	// j = i;
	// while (av[1][j] != ' ' && j > 0)
	// 	j--;
    // while (j <= i)
    //     write(1, &av[1][j++],1);
	if (av[1][i])
	{
	    while (av[1][i] && av[1][i] != 32)
	        i++;
	    while (av[1][i] && av[1][i] == 32)
	        i++;
	    if (av[1][i] == '\0')
	    {
	        i = 0;
	        while (av[1][i] && av[1][i] != 32)
	        {
	            write(1, &av[1][i], 1);
	            i++;
	        }
	    }
	}
	while (av[1][i])
	    i++;
	i -= 1;
	while (av[1][i] == 32)
	i--;
	while (av[1][i] && av[1][i] != 32)
	    i--;
	while (av[1][i])
	{
	    if (av[1][i] != 32)
	        write(1, &av[1][i], 1);
	    i++;
	}
}