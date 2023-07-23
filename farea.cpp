/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   farea.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:20:46 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/29 22:29:36 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
using namespace std;

int farea(int &a, int &b)
{
    int area;

    area = a * b;
    return(area);
}

int main()
{
    int a, b;
    cout << "Pleas enter number 1" << endl;
    cin >> a;
    cout << "Pleas enter number 2" << endl;
    cin >> b;
    cout << "\n****************\n";
    cout << farea(a, b) << endl;
}