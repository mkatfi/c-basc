/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fcarea_i.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:50:59 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/30 01:09:00 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<math.h>
using namespace std;

float fcarea_i(int &a, int &b)
{
    float area;
    const float PI = 3.14;

    area = (PI * ((b * b) / 4)) * ((2 * a - b) / (2 * a + b));
    return(area);
}

int main()
{
    int a, b;
    cout << "Pleas enter number 1" << endl;
    cin >> a;
    cout << "Pleas enter number 1" << endl;
    cin >> b;
    cout << "\n****************\n";
    cout << fcarea_i(a, b) << endl;
}