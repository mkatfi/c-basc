/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pattern_Latter_2.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 22:27:51 by mkatfi            #+#    #+#             */
/*   Updated: 2023/09/29 22:31:35 by mkatfi           ###   ########.fr       */
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
	int i = 1;
	int n;
	char c = 65;
	while (i <= num)
	{
		n = 1;
		while(n <= i)
		{
			cout << c;
			n++;
		}
		cout << endl;
		i++;
		c++;
	}
}
int main()
{
	int num = ReadPositiveNumber("Please enter a positive number: ");
    pattern(num);
    return 0;
}
