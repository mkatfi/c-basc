/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_order.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 02:19:53 by mkatfi            #+#    #+#             */
/*   Updated: 2023/12/31 23:47:59 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    cout << Message << endl;
    cin >> Number;
	cout << endl;
	if (Number <= 0)
		return 0;
	return (Number);
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

void  print_number(int num)
{
	int i;
	int n;
	n = reversed_number(num);
	while (n > 0)
	{
		i = n % 10;
		n = n / 10;
		cout << i << endl;
	}
}
int main ()
{
	int num = ReadPositiveNumber("Please enter a positive number: ");
    print_number(num);
	return 0;
}
