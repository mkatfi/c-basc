/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fpower.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 01:19:10 by mkatfi            #+#    #+#             */
/*   Updated: 2023/03/30 01:41:37 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
using namespace std;

int fpower(int &a, int &M)
{
    int c;
    int p;
    p = 1;
    c = 0;
    if (a == 0)
        cout << '0' << endl;
    while (M != c)
    {
        p = p * a;
        c+=1;
    }
    return (p);
}
int main()
{
    int a, m;
    cout << "Pleas enter number" << endl;
    cin >> a;
    cout << "Pleas enter number of power" << endl;
    cin >> m;
    cout << fpower(a, m) << endl;
}