/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:25:23 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/02/11 22:29:43 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    const Animal* meta = new Animal();
     std::cout << std::endl;

    const Animal* j = new Dog();
     std::cout << std::endl;
     
    const Animal* i = new Cat();
     std::cout << std::endl;
     
    const WrongAnimal *P = new WrongCat();
     std::cout << std::endl;
    
    std::cout << j->gettype() << " " << std::endl;
    std::cout << i->gettype() << " " << std::endl;
    std::cout << P->getType() << " " << std::endl;
     std::cout << std::endl;
     
    std::cout << "Sound Cat is : " ;
    i->makeSound();
    std::cout << "Sound Dog is : " ;
    j->makeSound();
    std::cout << "Sound Animal is : " ;
    meta->makeSound();
    std::cout << "Sound wrong animal is : " ;
    P->makeSound();
    std::cout << std::endl;
    std::cout << j->gettype() << std::endl;

    
    delete j;
    std::cout << std::endl;

    delete i;
    std::cout << std::endl;
    
    delete P;
    std::cout << std::endl;
    
    delete meta;
    std::cout << std::endl;
   
   // system("leaks Polymorphism");
    
    return 0;
}