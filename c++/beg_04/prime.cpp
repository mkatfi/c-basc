/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prime.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:15:30 by mkatfi            #+#    #+#             */
/*   Updated: 2023/09/27 00:08:10 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
using namespace std;

int  isPrime(int num)
{
    if (num <= 0)
        return 0;
	int i = 2;
	int n = round(num / i);
	while (i <= n)
	{
        if (num % i == 0)
            return 0;
		i++;
	}
	return 1;
}

int main()
{
    int n;

    cout << "Enter a positive number: ";
    cin >> n;
    cout << "Prime numbers from 1 to " << n << " are:" << endl;
	int i = 0;
	while (i <= n)
	{
        if (isPrime(i) == 1)
            cout << i << "\n";
		i++;
	}
    return 0;
}
