/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   starry.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 00:17:36 by mkatfi            #+#    #+#             */
/*   Updated: 2023/09/07 00:31:10 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

struct s_cart
{
    std :: string FirstName;
    std :: string lastName;
    int Age;
    std :: string phone;
};

void Readfun(s_cart &p)
{
    std :: cout << "what is your first name ?" << std ::endl;
	std :: cin >> p.FirstName;
	std :: cout << "where are you from ?" << std ::endl;
	std :: cin >> p.lastName;
	std :: cout << "enter your Age." << std ::endl;
	std :: cin >> p.Age;
	std :: cout << "enter your number phone ." << std ::endl;
	std :: cin >> p.phone;

}

void printfun(s_cart p)
{
    std :: cout << "**************************" << std :: endl;
    std :: cout << "Firat Name : " << p.FirstName <<  '.' << std :: endl;
    std :: cout << "last Name : " << p.lastName << '.' << std :: endl;
    std :: cout << "Age   : " << p.Age << " Years." << std :: endl;
    std :: cout << "Phone : " << p.phone << '.' << std :: endl;
    std :: cout << "**************************" << std :: endl;
}
void readperson(s_cart p[2])
{
    Readfun(p[0]);
    Readfun(p[1]);
}
void printperson(s_cart p[2])
{
    printfun(p[0]);
    printfun(p[1]);
}
int main()
{
    s_cart p[2];
    readperson(p);
    printperson(p);
}