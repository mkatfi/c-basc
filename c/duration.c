/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duration.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:57:49 by mkatfi            #+#    #+#             */
/*   Updated: 2023/02/22 20:27:01 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	float days;
	float hours;
	float minutes;
	float seconds;
	float s;
	printf("enter the days:  ");
	scanf(" %f", &days);
	printf("enter the hours:  ");
	scanf(" %f", &hours);
	printf("enter the minutes:  ");
	scanf(" %f", &minutes);
	printf("enter the seconds:  ");
	scanf(" %f", &seconds);
	days = days * 24 * 60 * 60;
	hours = hours * 60 * 60;
	minutes = minutes * 60;
    s = days + hours + minutes + seconds;
    printf("total = %.2f", s);
}