/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:36:26 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/02/11 22:44:42 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat:    Default constructor called" << std::endl;
    type = "Cat";
}


Cat::~Cat()
{
    std::cout << "Cat: Destructor called" << std::endl;
}

Cat& Cat::operator = (const Cat& other)
{
    std::cout << "Cat: copy assignment operator" << std::endl;
    
    type = other.type;
    return (*this);
}

Cat::Cat(const Cat& other) : Animal()
{
    std::cout << "Cat: copy constructor" << std::endl;
    *this = other;
}

void Cat::makeSound() const
{
    std::cout << "meaw meaw ...!" << std::endl;
}