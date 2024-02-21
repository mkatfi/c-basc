/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cart.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:21:33 by mkatfi            #+#    #+#             */
/*   Updated: 2023/09/06 16:52:19 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

struct s_cart
{
    std :: string Name;
    int Age;
    std :: string City;
    std :: string Country;
    double Monthly_Salary;
    double Yearly_Salary;
    char Gender;
    bool Married;
};

void Readfun(s_cart &p)
{
    std :: cout << "what is your name ?" << std ::endl;
	getline(std :: cin , p.Name);
	std :: cout << "enter your Age." << std ::endl;
	std :: cin >> p.Age;
	std :: cout << "where are you from ?" << std ::endl;
	std :: cin >> p.City;
	std :: cout << "what is your Country?" << std ::endl;
	std :: cin >> p.Country;
	std :: cout << "what's your Monthly Salary ?" << std ::endl;
	std :: cin >> p.Monthly_Salary;
    std :: cout << "what's your Monthly Salary ?" << std ::endl;
	std :: cin >> p.Yearly_Salary;
	std :: cout << "what's your Gender ? M/F" << std :: endl;
	std :: cin >> p.Gender;
	std :: cout << "Are you Married ? 1/0" << std ::endl;
    std :: cin >> p.Married;
}

void printfun(s_cart p)
{
    std :: cout << "**************************" << std :: endl;
    std :: cout << "Name : " << p.Name <<  '.' << std :: endl;
    std :: cout << "Age  : " << p.Age << " Years." << std :: endl;
    std :: cout << "City : " << p.City << '.' << std :: endl;
    std :: cout << "Country : " << p.Country << '.' << std :: endl;
    std :: cout << "Monthly_Salary : " << p.Monthly_Salary << '.' << std :: endl;
    std :: cout << "Yearly_Salary  : " << p.Yearly_Salary <<  '.' << std :: endl;
    std :: cout << "Gender  : "<< p.Gender << '.' << std :: endl;
    std :: cout << "Married : "<< p.Married << '.' << std :: endl;
    std :: cout << "**************************" << std :: endl;
}
int main()
{
    s_cart p;
    Readfun(p);
    printfun(p);
}