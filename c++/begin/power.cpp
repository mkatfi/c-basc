/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   power.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 00:59:51 by mkatfi            #+#    #+#             */
/*   Updated: 2023/02/15 01:16:57 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace	std;
int	main()
{
    int a, b, i;
    cout << "please enter the Number" << endl;
    cin >> a;
    cout << "**********" << endl;

    b = a;
    i = 0;
    if (a == 0)
    {
        cout << '0' << endl;
    }
    else
    {
        while (i < a)
        {
            b = b * a;
            cout << b << endl;
            i++;
        }
    }
}