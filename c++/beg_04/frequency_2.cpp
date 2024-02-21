/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frequency_2.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 23:18:29 by mkatfi            #+#    #+#             */
/*   Updated: 2023/09/28 02:16:47 by mkatfi           ###   ########.fr       */
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
	int k = 0;

	while (k < 10)
	{
		int n = 0;
		n = frequecy_number(num, k);
		if (n > 0)
		{
			cout << endl;
			cout << "Digit: " << k << " Frequency is "
				<< n << " Time(s).\n";
		}
		k++;
	}
}
