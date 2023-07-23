/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   totalbill.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:32:45 by mkatfi            #+#    #+#             */
/*   Updated: 2023/02/22 19:45:45 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int t, c;
	printf("enter the number:  ");
	scanf(" %d", &c);
	printf("enter the number:  ");
	scanf("%d", &t);
	printf("\n pay back = %d", t - c);
}