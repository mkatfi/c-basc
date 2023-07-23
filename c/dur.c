/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dur.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:49:30 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/13 15:38:58 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	main(void)
{
	float days;
	float hours;
	float minutes;
	float seconds;
    float s;
    float k;

    printf("enter the days:  ");
	scanf(" %f", &s);
	
	days = days * 24 * 60 * 60;
	hours = hours * 60 * 60;
	minutes = minutes * 60;
   
    days = s / days;


        

}