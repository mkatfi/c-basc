/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   midium.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:05:37 by mkatfi            #+#    #+#             */
/*   Updated: 2023/02/08 15:36:44 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace	std;
int	midium(int a, int b, int c)
{
	if (a > b && a < c)
		return (a);
	if (b > a && b < c)
		return (b);
	if (c > a && c < b)
		return (c);
}

int	main(void)
{
	int a, b, c;
	cout << "Please enter the first number " << endl;
	cin >> a;
	cout << "Please enter the second number " << endl;
	cin >> b;
	cout << "Please enter the third number " << endl;
	cin >> c;
	cout << endl;
    cout << midium(a, b, c);
}
