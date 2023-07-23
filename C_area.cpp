/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C_area.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:56:13 by mkatfi            #+#    #+#             */
/*   Updated: 2023/05/23 16:03:30 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
using namespace std;
int main()
{
    const float PI = 3.14;
    int a;
    float area;
    cout << "Please enter the number " << endl;
    cin >> a;
    cout << "********" << endl;
    area = (PI * a * a) / 4;
    cout << (float)area;
}