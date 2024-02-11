/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:40:33 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/02/11 22:45:27 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "Wcst";
	std::cout << "WrongCat:    Default constructor called\n";
}


WrongCat::~WrongCat()
{
	std::cout << "A wrong cat was destroyed\n";
}

WrongCat::WrongCat(WrongCat & ref)
{
	std::cout << "A cat was constructed from copy\n";
	
	this->type = ref.getType();
}

WrongCat &WrongCat::operator=(WrongCat const & other)
{
	this->type = other.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong meow meow\n";
}