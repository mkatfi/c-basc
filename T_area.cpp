/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   T_area.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:48:22 by mkatfi            #+#    #+#             */
/*   Updated: 2023/02/14 19:50:21 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace	std;
int	main(void)
{
	int a, h, area;
	cout << "Please enter the number " << endl;
	cin >> a;
	cout << "Please enter the number " << endl;
	cin >> h;
	cout << "*******" << endl;
	area = a /2 * h;
	cout << area << endl;
}