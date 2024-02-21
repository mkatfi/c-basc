/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frequecy.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:41:11 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/25 11:52:20 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
using namespace std;

int readpositive(string message)
{
	int number = 0;
	cout << message << endl;
	cin >> number;
	if (number <= 0)
		return (1);
	return (number);
}
int frequecy_number(int num, int k)
{
	int n = 0;
	int c = 0;
	while(num > 0)
	{
		n = num % 10;
		num =  num / 10;
		if (k == n)
			c++;
	}
	return(c);
}
int main ()
{
	int num = readpositive("please enter number ?");
	int k = readpositive("please enter one number ?");
	cout << endl;
	cout << "Digit: " << k << " Frequency is " << frequecy_number(num, k) << " Time(s).\n";
}
