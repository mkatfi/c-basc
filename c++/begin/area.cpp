/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   area.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:06:27 by mkatfi            #+#    #+#             */
/*   Updated: 2023/04/06 17:17:41 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
using namespace std;
int main(void)
{
    int a, b, area;
	cout << "Please enter the number " << endl;
	cin >> a;
	cout << "Please enter the number " << endl;
    cin >> b;
    cout << "*******"<< endl;
    area = a * b;
    cout << area << endl;
}