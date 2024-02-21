/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fcarea.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:44:58 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/29 22:51:49 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<math.h>
using namespace std;

float fcarea(int &a)
{
    float area;
    const float PI = 3.14;

    area = PI * (a * a);
    return(area);
}

int main()
{
    int a;
    cout << "Pleas enter number 1" << endl;
    cin >> a;
    cout << "\n****************\n";
    cout << fcarea(a) << endl;
}