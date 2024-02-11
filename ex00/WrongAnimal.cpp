/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:45:25 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/02/11 22:45:14 by hoakoumi         ###   ########.fr       */
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
	std::cout << "Wrong ; Animal was destroyed\n";
}

WrongAnimal::WrongAnimal(WrongAnimal & ref)
{
	std::cout << "Wrong Animal was constructed from a copy\n";
	this->type = ref.type;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & other)
{
	this->type = other.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wromg Animal sound \n";
}

std::string WrongAnimal::getType( void ) const
{
	return (this->type);
}