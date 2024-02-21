/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pattern.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 22:31:28 by mkatfi            #+#    #+#             */
/*   Updated: 2023/09/28 22:41:11 by mkatfi           ###   ########.fr       */
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
	int i;
	int n;
	while (num >= 1)
	{
		n = num;
		while(n >= 1)
		{
			cout << num;
			n--;
		}
		cout << endl;
		num--;
	}
}
int main()
{
	int num = ReadPositiveNumber("Please enter a positive number: ");
    pattern(num);
    return 0;
}
