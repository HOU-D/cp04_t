/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:40:33 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/02/12 15:45:31 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "Wcst";
	
	std::cout << "WrongCat:    Default constructor called\n";
}


WrongCat::~WrongCat()
{
	std::cout << "WrongCat cat was destroyed\n";
}

WrongCat::WrongCat(WrongCat & ref)
{
	std::cout << "A WrongCat was constructed from copy\n";
	
	this->type = ref.getType();
}

WrongCat &WrongCat::operator=(WrongCat const & other)
{
	this->type = other.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat meow meow\n";
}