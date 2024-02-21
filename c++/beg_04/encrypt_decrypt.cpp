/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   encrypt_decrypt.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 01:57:21 by mkatfi            #+#    #+#             */
/*   Updated: 2023/10/02 14:59:40 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>
using namespace std;


string Readstring(string Message)
{
    string Str;
    cout << Message << endl;
	getline(cin, Str);
	cout << endl;
	return (Str);
}

string Decryption(string s, int num)
{
	int i = 0;

	while(s[i])
	{
		s[i] = char(s[i] - num);
		i++;
	}
	return (s);
}
string  Encryption(string s, int num)
{
	int i = 0;
	while(s[i])
	{
		s[i] = char (s[i] + num);
		i++;
	}
	return (s);
}

int main ()
{
	string s1 = Readstring("Please Enter Your Name ?");
	string s2 = Encryption(s1, 2);
	string s3 = Decryption(s2, 2);
	cout << "Text Before Encryption : " << s1<< endl;
	cout << "Text After Encryption  : " << s2 << endl;
	cout << "Text After Decryption  : " << s3 << endl;
}
