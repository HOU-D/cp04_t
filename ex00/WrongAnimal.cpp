/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:45:25 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/02/12 15:44:46 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal: Default constructor called\n";
	
	this->type = "Wrong Animal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Animal was destroyed\n";
}

WrongAnimal::WrongAnimal(WrongAnimal & ref)
{
	std::cout << "Wrong Animal was constructed from a copy\n";
	
	this->type = ref.type;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & other)
{
	type = other.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal:Animal sound \n";
}

std::string WrongAnimal::getType( void ) const
{
	return (type);
}