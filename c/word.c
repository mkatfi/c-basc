/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   word.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:52:26 by mkatfi            #+#    #+#             */
/*   Updated: 2023/02/17 20:35:38 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	
	i = 0;
	while (av[1][i] == 32)
		i++;
	while (av[1][i] && av[1][i] != 32)
		write(1, &av[1][i++], 1);
}
