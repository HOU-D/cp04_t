/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:58:26 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/02/12 19:18:26 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
 
Dog::Dog()
{
    std::cout << "Dog: Default constructor called" << std::endl;
    
    type = "Dog";
    brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog: Destructor called" << std::endl;
    
    delete brain;
}

Dog& Dog::operator = (const Dog& other)
{
    std::cout << "Dog: copy assignment operator" << std::endl;

    
    type = other.type;
   // *brain = *other.brain;
    
    if (other.brain)
        delete brain;
    
    brain = new Brain();
    
    int i = 0 ;
    
    while (i < 100)
    {
        brain->setIdea(other.brain->getIdea(i), i);
        i++;
    }
    
    return (*this);
}

Dog::Dog(const Dog& other)
{
    std::cout << "Dog: copy constructor" << std::endl;
    
    brain = NULL;
    *this = other;
}

void Dog::makeSound() const
{
    std::cout << "Dog: the Dog sound!" << std::endl;
}