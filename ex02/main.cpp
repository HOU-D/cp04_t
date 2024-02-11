/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:25:28 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/02/10 22:41:01 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

void    f(int N)
{
    Animal **a = new Animal*[N];
    int i = 0;
    int j;

    j = 1;
    for(; i < N/2; i++)
    {
        std::cout << "[" << j << "] ";
        a[i] = new Dog();
        j++;
    }
    j = 1;
    for(; i < N ; i++)
    {
        std::cout << "[" << j << "] ";
        a[i] = new Cat();
        j++;
    }
    std::cout << std::endl;

    //* print sounds the animals *//
    for (int i = 0; i < N ; i++)
    {
        a[i]->makeSound();
        delete a[i];
    }
    delete []a;
}

int main()
{
    int N = 2;

    f(N);
    return 0;
}