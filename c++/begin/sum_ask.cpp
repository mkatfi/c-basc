/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_ask.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:24:24 by mkatfi            #+#    #+#             */
/*   Updated: 2023/01/23 23:27:50 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace	std;
int	main(void)
{
	int a;
	int b;
	int c;

	cout << "enter number one." << endl;
	cin >> a;
	cout << "enter number Two." << endl;
	cin >> b;
	cout << "enter number three." << endl;
    cin >> c;
    cout << "*******************\n";
    cout << a << " + " << endl;
	cout << b << " + " << endl;
	cout << c << endl;
	cout << "____________________" << endl;
	cout << "total =" << a + b + c << endl;
	return (0);
}