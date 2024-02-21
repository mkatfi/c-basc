/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reversed_number.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:12:04 by mkatfi            #+#    #+#             */
/*   Updated: 2023/09/27 20:36:49 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
using namespace std;

int readpositive(string message)
{
	int number = 0;
	cout << message << endl;
	cin >> number;
	cout << endl;
	if (number <= 0)
		return (1);
	return (number);
}
int reversed_number(int num)
{

	int n = 0;
	int m = 0;
	while(num > 0)
	{
		n = num % 10;
		num =  num / 10;
		m = m * 10 + n;
	}
	return(m);
}
int main ()
{
	int num = readpositive("please enter number :");
	cout << "Revees is : " << reversed_number(num) << endl;
}
