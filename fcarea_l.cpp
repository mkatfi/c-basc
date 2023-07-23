/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fcarea_l.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:48:10 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/29 22:52:00 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<math.h>
using namespace std;

float fcarea_l(int &a)
{
    float area;
    const float PI = 3.14;

    area =  (a * a)/ (PI * 4);
    return(area);
}

int main()
{
    int a;
    cout << "Pleas enter number 1" << endl;
    cin >> a;
    cout << "\n****************\n";
    cout << fcarea_l(a) << endl;
}