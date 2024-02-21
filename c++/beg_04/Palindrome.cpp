/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Palindrome.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 22:17:10 by mkatfi            #+#    #+#             */
/*   Updated: 2023/09/28 22:28:03 by mkatfi           ###   ########.fr       */
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

void  palindrome(int num)
{
	int n = reversed_number(num);
	int i = 0;
	if (n - num == 0)
		cout << "Yes, it is a Palindrome number.\n";
	else
		cout << "No , it is NOT a palindrome number.";
}

int main ()
{
	int num = ReadPositiveNumber("Please enter a positive number: ");
   	palindrome(num);
	return 0;
}
