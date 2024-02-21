/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duration.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 20:00:20 by mkatfi            #+#    #+#             */
/*   Updated: 2023/04/10 20:09:25 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

float duration(int a, int b, int c, int d)
{
    float sum;
    a = a * 24 * 60 * 60;
    b = b * 60 * 60;
    c = c * 60;

    sum = a + b + c + d;
    return(sum);
}

int main()
{
    float i;
    i = duration(2, 5, 45, 35);
    printf("%.2f", i);
}