/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   farea_th.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:30:40 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/29 22:40:14 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<math.h>
using namespace std;

float farea_th(int &a, int &b)
{
   float area;

    area = a * sqrt((b * b) - (a * a));
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
    cout << farea_th(a, b) << endl;
}
