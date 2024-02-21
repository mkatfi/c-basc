/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 18:30:21 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/28 18:40:11 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>

using namespace	std;

int main()
{
	string fullname;
	string s1;
	string s2;
	string s3 = s1 + s2;
	int sum;

    cout << "Please enter the string" << endl;
    getline(cin, fullname);
	cout << "Please enter the number string " << endl;
	cin >> s1;
	cout << "Please enter the number string " << endl;
    cin >> s2;
    cout << "\n**************************\n";
    cout << "the length of string 1 is " << fullname.length() << endl;
    cout << fullname << endl;
	cout << fullname[0] << ",";
	cout << fullname[2] << ",";
	cout << fullname[4] << ",";
	cout << fullname[7] << endl;
	cout << s3 << endl;
	sum = stoi(s1) * stoi(s2);
	cout << stoi(s1) << "*" << stoi(s2) << "=" << sum << endl;
	return(0);
}