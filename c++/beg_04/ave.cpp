/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ave.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkatfi <mkatfi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 22:14:25 by mkatfi            #+#    #+#             */
/*   Updated: 2023/09/06 22:39:08 by mkatfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

void readfun(int x[3])
{
    std :: cout << "pleas enter number 1 ?\n";
    std :: cin >> x[0];
    std :: cout << "pleas enter number 2 ?\n";
    std :: cin >> x[1];
    std :: cout << "pleas enter number 3 ?\n";
    std :: cin >> x[2];
}
float printfun(int x[3])
{
    float a;
    a = (x[0] + x[1] + x[2]) / 3;
    return(a);
}

int main()
{
    int x[3];
    readfun(x);
    std ::cout << "******************************\n"; 
    std :: cout << "the average of grades is "<< printfun(x) ;
}