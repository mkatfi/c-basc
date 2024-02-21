/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 05:05:33 by mkatfi            #+#    #+#             */
/*   Updated: 2023/09/06 05:10:33 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int mysum(void)
{
    int a,b;

    std :: cout << "enter number please 1" << std :: endl;
    std :: cin >> a;  
    std :: cout << "enter number please 2" << std :: endl;
    std :: cin >> b;
    std :: cout << "****************" << std :: endl;

    int sum = a + b;
    return(sum);    
}
int main()
{
    std :: cout << mysum() << std :: endl;
}