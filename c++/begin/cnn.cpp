/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cnn.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 22:32:31 by mkatfi            #+#    #+#             */
/*   Updated: 2023/01/23 22:48:29 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace	std;
int	main(void)
{
	string Name = "Mohammed Abu-Hadhoud.";
	int Age = 44;
	string City = "Amman.";
	string Country = "Jordan.";
	float Monthly_Salary = 5000;
	char Gender = 'M';
	bool Married = true;

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
    return(0);
}