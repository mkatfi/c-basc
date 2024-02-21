/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pattern_letter.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 21:42:54 by mkatfi            #+#    #+#             */
/*   Updated: 2023/09/29 22:21:02 by mkatfi           ###   ########.fr       */
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
void pattern(int num)
{
	int n;
	char c = 64 + num;
	while (num >= 1)
	{
		n = num;
		while(n >= 1)
		{
			cout << c;
			n--;
		}
		cout << endl;
		num--;
		c--;
	}
}
int main()
{
	int num = ReadPositiveNumber("Please enter a positive number: ");
    pattern(num);
    return 0;
}
