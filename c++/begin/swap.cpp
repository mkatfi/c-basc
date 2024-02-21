/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:40:15 by mkatfi            #+#    #+#             */
/*   Updated: 2023/02/14 16:52:33 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace	std;
int	main(void)
{
	int tap;
	int a, b;
	cout << "Please enter the first number " << endl;
	cin >> a;
    cout << "Please enter the second number " << endl;
    cin >> b;
    cout << "first number a "<<a << endl;
    cout << "second number b " << b << endl;
    cout << "*********" << endl;
        tap = a;
        a = b;
        b = tap;
    cout << "first number a "<<a << endl;
    cout << "second number b "<<b << endl;
}