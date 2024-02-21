/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perfectnumber.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:04:04 by mkatfi            #+#    #+#             */
/*   Updated: 2023/09/27 16:28:40 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    cout << Message << endl;
    cin >> Number;
	if (Number <= 0)
    	return 0;
	return (Number);
}

int  isPerfectNumber(int Number)
{
    int Sum = 0;
	int i = 1;

	while(i < Number)
	{
		if (Number % i == 0)
            Sum += i;
		i++;
	}
	if (Number == Sum)
		return (1);
	return (0);
}

void PrintResults(int Number)
{
    if (isPerfectNumber(Number) == 1)
        cout << Number << " is a Perfect Number.\n";
    else
        cout << Number << " is NOT a Perfect Number.\n";
}

int main()
{

    int num = ReadPositiveNumber("Please enter a positive number: ");
    PrintResults(num);
    return 0;
}
