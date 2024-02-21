/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Circle_area.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 23:38:33 by mkatfi            #+#    #+#             */
/*   Updated: 2023/02/14 23:52:45 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace	std;
int	main(void)
{
	const float PI = 3.14;
	int a;
	float area;
	cout << "Please enter the number " << endl;
	cin >> a;
	cout << "********" << endl;
	area = (PI * a * a) / 4;
	cout << (float)area;
}