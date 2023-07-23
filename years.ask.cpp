/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   years.ask.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 23:28:21 by mkatfi            #+#    #+#             */
/*   Updated: 2023/01/23 23:31:07 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace	std;
int	main(void)
{
	int	age;
    cout << "how old are you ???\n";
    cin >> age;
    cout << "After 5 years you will be " << age + 5 << " years old." << endl;
	return (0);
}