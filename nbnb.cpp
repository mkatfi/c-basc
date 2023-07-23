/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbnb.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 03:21:46 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/29 03:31:38 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;
int nb()
{
    int a, b, c;
    cout << "Please enter Number1" << endl;
    cin >> a;
    cout << "Please enter Number2" << endl;
    cin >> b;
    cout << "************************" << endl;
    c = a + b;
    return(c);
}

int main()
{
    cout << nb() << endl;;
}