/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fswap.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 03:49:04 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/29 22:22:34 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
using namespace std;
void fswap(int *a, int *b)
{
    int tmp;
    
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int a, b;
    cout << "Pleas enter the number1" << endl;
    cin >> a;
    cout << "Pleas enter the number2" << endl;
    cin >> b;
    cout << "first number a " << a << endl;
    cout << "second number b " << b << endl;
    cout << "*********" << endl;
    fswap(&a, &b);
    cout << "first number a "<<a << endl;
    cout << "second number b "<<b << endl;
}