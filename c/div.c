/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:35:21 by mkatfi            #+#    #+#             */
/*   Updated: 2023/05/16 12:14:52 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main()
{
    int i, j;
    int div, mod;

    i = 2;
    j = 5;
    ft_div_mod(i, j, &div, &mod);
    printf("%d %d", div, mod);    
}