/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   riv.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:29:14 by mkatfi            #+#    #+#             */
/*   Updated: 2024/01/25 11:51:41 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int i;
	int n;
	int j;
	string no;

	cin >> n >> no;
	i =0;
	j =0;
	while (no[i])
	{
		if (no[i] == n)
			j++;
		i++;
	}
	cout << "jjj\n" << j << "\n" << i;
	// while(no[i])
	// {
	// 	if (no[i] )
	// 	cout << no[i];
	// 	i++;
	// }
	return 0;
}
