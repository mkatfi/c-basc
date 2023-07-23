/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   billvalue.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:49:58 by mkatfi            #+#    #+#             */
/*   Updated: 2023/04/06 17:43:08 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
    int billvalue;
    float total;
    printf("enter the number:  ");
    scanf(" %d", &billvalue);
    total = billvalue * 1.1;
    total = total * 1.16;
    printf("billvalue = %f", total);
}
