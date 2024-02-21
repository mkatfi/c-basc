/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cir_area_tri.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 23:58:03 by mkatfi            #+#    #+#             */
/*   Updated: 2023/02/15 00:10:53 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace	std;
int	main(void)
{
    const float	PI = 3.14;
    
	float a, b, area;
	cout << "Please enter the number " << endl;
	cin >> a;
	cout << "Please enter the number " << endl;
	cin >> b;
	cout << "*******" << endl;
	area = (PI * b * b / 4) * ((2 * a - b) / (2 * a + b));
	cout << area << endl;
}
