/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Circle_area2.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 23:40:13 by mkatfi            #+#    #+#             */
/*   Updated: 2023/02/14 23:53:02 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace	std;
int	main(void)
{
	const float PI = 3.14;
	int l;
	float area;
	cout << "Please enter the number " << endl;
	cin >> l;
	cout << "********" << endl;
	area = (l * l) / (4 * PI);
	cout << area;
}