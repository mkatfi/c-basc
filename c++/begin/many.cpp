/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   many.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 01:19:45 by mkatfi            #+#    #+#             */
/*   Updated: 2023/02/15 01:54:55 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace	std;
int	main(void)
{
    int Pennies;
    int Nickels;
    int Dimes;
    int Quarters;
    float Dollars;
    cout << "please enter the first Number " << endl;
    cin >> Pennies;
    cout << "please enter the first Number " << endl;
    cin >> Nickels;
    cout << "please enter the first Number " << endl;
    cin >> Dimes;
    cout << "please enter the first Number " << endl;
    cin >> Quarters;
    cout << "please enter the first Number " << endl;
    cin >> Dollars;

    int total_Pennies = ((Pennies * 1) + (Nickels * 5) + (Dimes * 10)
        + (Quarters * 25) + (Dollars * 100));

    cout << "total Pennies = " << total_Pennies << endl;
    float total_Dollars = ((Pennies * 1) + (Nickels * 5) + (Dimes * 10)
        + (Quarters * 25) + (Dollars * 100)) / 100;
    cout << "total Dollars = " << total_Dollars << endl;
}