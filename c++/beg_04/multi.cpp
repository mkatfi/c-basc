/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multi.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:47:36 by mkatfi            #+#    #+#             */
/*   Updated: 2023/09/26 12:12:00 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
using namespace std;

void heder()
{
	int i = 1;
	cout << "\n				multiplication table Form 1 to 10 \n\n";
	cout << "	";
	while(i <=10)
	{
		cout << i << "	";
		i++;
	}
	cout << "\n";
	cout << "______________________________________________________________________________________\n";
}
int main()
{
	int i = 1;
	heder();
	while (i <= 10)
	{
		int j = 1;
		cout << i;
		if (i < 10)
			cout << "     | ";
		else
			cout << "    | ";
		while (j <= 10)
		{
			cout << i * j;
			if (i * j > 10)
				cout << "	";
			else
				cout << "	";
			if (j == 10)
				cout << "\n";
			j++;
		}
		i++;
	}
}
