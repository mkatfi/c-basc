/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_AAA_ZZZ.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 23:09:41 by mkatfi            #+#    #+#             */
/*   Updated: 2023/09/30 01:10:11 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>
using namespace std;

void print_AAA_ZZZ()
{
	char a = 'A';
	char b;
	char n;
	string word = "";
	while (a <= 'Z')
	{
		b = 'A';
		while (b <= 'Z')
		{
			n = 'A';
			while (n <= 'Z')
			{
				word += a;
				word += b;
				word += n;
				cout << word << endl;
				n++;
				word = "";
			}
			b++;
		}
		a++;
		cout << "\n___________________________________________\n";
	}
}
int main()
{
	print_AAA_ZZZ();
}
