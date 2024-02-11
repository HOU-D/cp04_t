/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:44:26 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/02/10 22:44:26 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat: Default constructor called" << std::endl;

    type = "Cat";
    brain = new Brain();
    
}

Cat::~Cat()
{
    std::cout << "Cat: Destructor called" << std::endl;

    delete brain;
}

Cat::Cat(const Cat& other) : Animal()
{
    std::cout << "Cat: copy constructor" << std::endl;

    brain = NULL;
    *this = other;
}

Cat& Cat::operator = (const Cat& other)
{
    std::cout << "Cat: copy assignment operator" << std::endl;

    if (this == &other)
        return (*this);

    type = other.type;
    
    if (brain)
        delete brain;

    brain = new Brain();

    int i = 0;

    while(i < 100)
    {
        brain->setIdea(other.brain->getIdea(i), i);
        i++;
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "meaw meaw ...!" << std::endl;
}