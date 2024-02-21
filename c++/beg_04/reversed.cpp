/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reversed.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:32:37 by mkatfi            #+#    #+#             */
/*   Updated: 2023/09/27 19:04:30 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>
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
void  Revesed_number(int num)
{
	int i = 0;
	while(num > 0)
	{
		i = num % 10;
		num = num / 10;
		cout << i << endl;
	}
}
int main ()
{
	 int num = ReadPositiveNumber("Please enter a positive number: ");
    Revesed_number(num);
	return 0;
}
