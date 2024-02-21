/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 02:31:16 by mkatfi            #+#    #+#             */
/*   Updated: 2023/09/06 05:01:40 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

int main()
{
    std :: string  mystring;
    std :: string  mystring1;
    std :: string  mystring2;

    std :: cout << "Please enter string 1 ?" <<    std :: endl;
    // std :: cin.ignore(1, '\n');
    std :: getline(   std :: cin, mystring);

    std :: cout << "Please enter string 2 ?" <<    std :: endl;
    std :: cin >> mystring1;

    std :: cout << "Please enter string 3 ?" <<    std :: endl;
    std :: cin >> mystring2;

    std :: cout << "************************" <<   std :: endl;

    std :: cout << "the length of String is :" << mystring.length() <<    std :: endl;
    std :: cout << "characters at 0,2,4,7 are : " << mystring[0] << mystring[2] << mystring[4] << mystring[7] <<    std :: endl;
    
    std :: string a = mystring1 + mystring2;
    std :: cout << "concatenating String 2 and String3 = "<< a <<    std :: endl;
    
    int sum = std :: stoi(mystring1) * std :: stoi(mystring2);
    std :: cout <<  mystring1 << " * " <<  mystring2 << " = " << sum <<    std :: endl;
    return(0);
}

