/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perfect_N.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:16:08 by mkatfi            #+#    #+#             */
/*   Updated: 2023/09/27 16:33:30 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
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
int  PrefectNumber(int num)
{
	int i = 1;
	int a = 0;
	while (i < num)
	{
		if (num % i == 0)
			a += i;
		i++;
	}
	if (a == num)
		return (1);
	return (0);
}
void printperfectnumber(int n)
{
	int i = 1;

	while (i <= n)
	{
		if (PrefectNumber(i) == 1)
			cout << i << endl;
		i++;
	}
}
int main()
{
    int Number;

	Number = ReadPositiveNumber("Please enter a positive number N: ");
	printperfectnumber(Number);
}
