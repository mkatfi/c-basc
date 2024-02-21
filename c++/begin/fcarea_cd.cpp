/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fcarea_cd.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 01:10:16 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/30 01:16:48 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<math.h>
using namespace std;

float fcarea_i(int &a, int &b, int &c)
{
    float area;
    const float PI = 3.14;
    int p;

    p = (a + b + c) / 2;
    area = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
    area = PI * (area * area);
    return(area);
}

int main()
{
    int a, b, c;
    cout << "Pleas enter number 1" << endl;
    cin >> a;
    cout << "Pleas enter number 2" << endl;
    cin >> b;
    cout << "Pleas enter number 3" << endl;
    cin >> c;
    cout << "\n****************\n";
    cout << fcarea_i(a, b, c) << endl;
}