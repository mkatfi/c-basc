/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   midium_word.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:10:12 by mkatfi            #+#    #+#             */
/*   Updated: 2023/02/19 20:29:42 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int i;
	i = 0;
	
	while (av[1][i])
		i++;
	i--;
	while (i >= 0 && av[1][i] == 32)
		i--;
	while (i >= 0 && av[1][i] != 32)
		i--;
	while (i >= 0 &&av[1][i] == 32)
		i--;
	while (i >= 0 && av[1][i] != 32)
		i--;
	i++;
	while (av[1][i] && av[1][i] != 32)
	{
		write(1, &av[1][i], 1);
		i++;
	}
}