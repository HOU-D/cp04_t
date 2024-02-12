/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:25:25 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/02/12 19:37:50 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

void f(int N)
{
    Animal **a = new Animal*[N];   


    int i = 0;
    int j;

    j = 1;
    while (i < N/2)
    {
        std::cout << "[" << j << "] ";
        a[i] = new Dog();
        std::cout << std::endl;
        j++;
        i++;
    }
    std::cout << std::endl;
    
    j = 1;
    while (i < N)
    {
        std::cout << "[" << j << "] ";
        a[i] = new Cat();
        std::cout << std::endl;
        j++;
        i++;
    }

    std::cout << std::endl;

    // Print sounds the animals //
    i = 0;
    while (i < N)
    {
        a[i]->makeSound();
        delete a[i];
        std::cout << std::endl;
        i++;
    }    
    delete []a;
}


int main()
{
    int N = 8;
    Dog p;
    Dog n(p);
    std::cout << p.gettype() <<  std::endl;
    
//    std::cout << l.gettype()<<std::endl;

    f(N);
   
    return 0;
}