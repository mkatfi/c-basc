/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matimatik.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:33:27 by mkatfi            #+#    #+#             */
/*   Updated: 2023/02/07 18:47:41 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace	std;
int	main(void)
{
	int a;
	int b;
	cout << "please enter the first Number a" << endl;
	cin >> a;
	cout << "please enter the second Number b" << endl;
	cin >> b;
	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " <<b << " = " << a - b << endl;
	cout << a <<" * "<< b <<" = "<<  a * b << endl;
	cout << a <<" / "<< b <<" = " << a / b << endl;
	cout << a << " % " <<b << " = " << a % b << endl;
}