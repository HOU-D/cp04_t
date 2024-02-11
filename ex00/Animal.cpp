/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:27:21 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/02/11 13:45:41 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    type = "Alex";
    std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal: Destructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
    std::cout << "Animal: copy constructor" << std::endl;
    *this = other;
}

Animal& Animal::operator = (const Animal& other)
{
    std::cout << "Animal: copy assignment operator" << std::endl;
    type = other.type;
    return (*this);
}

void    Animal::makeSound() const
{
    std::cout << "Animal: Animal sound" << std::endl;
}

std::string Animal::gettype() const
{
    return (type);
}
