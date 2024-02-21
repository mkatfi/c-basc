/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cnn_ask.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:07:41 by mkatfi            #+#    #+#             */
/*   Updated: 2023/01/23 23:34:34 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace	std;
int	main(void)
{
	string Name;
	int Age;
	string City;
	string Country;
	float Monthly_Salary;
	char Gender;
	bool Married;

	cout << "what is your name ?" << endl;
	cin >> Name;
	cout << "enter your Age." << endl;
	cin >> Age;
	cout << "where are you from ?" << endl;
	cin >> City;
	cout << "what is your Country?" << endl;
	cin >> Country;
	cout << "what's your Monthly Salary ?" << endl;
	cin >> Monthly_Salary;
	cout << "what's your Gender ? M/F" << endl;
	cin >> Gender;
	cout << "Are you Married ? 1/0" << endl;
    cin >> Married;
    
    cout << "***********************************" << endl;
	cout << "Name :" << Name << endl;
	cout << "Age :" << Age << endl;
	cout << "City :" << City << endl;
	cout << "Country :" << Country << endl;
	cout << "Monthly Salary :" << Monthly_Salary << endl;
	cout << "Yearly Salary :" << Monthly_Salary * 12 << endl;
	cout << "Gender :" << Gender << endl;
	cout << "Married :" << Married << endl;
	cout << "***********************************" << endl;
	return (0);
}