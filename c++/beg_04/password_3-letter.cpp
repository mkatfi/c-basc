/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   password_3-letter.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 01:11:03 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/25 11:54:00 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>
// using namespace std;


std::string ReadPositiveNumber(std::string Message)
{
    std::string Number;
    std::cout << Message << std::endl;
	std::cin >> Number;
	std::cout << std::endl;
	return (Number);
}
void password(std::string s)
{
	char b;
	char n;
	char a = 'A';
	int i = 1;
	int j = 0;
	std::string word = "";
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
				std::cout <<  "Trial["<< i << "] : " << word << std::endl;
				if (word  == s)
				{
					std::cout <<  "Trial["<< i << "] : " << word << std::endl;
					std::cout << std::endl;
					std::cout << "Password is " << word << std::endl;
					std::cout << "Found after " << i << " Trial(s)\n";
					return ;
				}
				n++;
				word = "";
				i++;
			}
			b++;
		}
		a++;
		// std::cout << "\n___________________________________________\n";
	}
}
int main()
{
	password(ReadPositiveNumber("Please enter your password ?"));
}
