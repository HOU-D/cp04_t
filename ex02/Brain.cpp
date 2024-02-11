/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:43:59 by hoakoumi          #+#    #+#             */
/*   Updated: 2024/02/10 22:43:59 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain: Default constructor called" << std::endl;

    int i = 0;

    while(i < 100)
    {
        ideas[i] = "idea";
        i++;
    }
}

Brain::~Brain()
{
    std::cout << "Brain: Destructor called" << std::endl;
}

Brain& Brain::operator = (const Brain& other)
{
    std::cout << "Brain: copy assignment operator" << std::endl;

    int i = 0;

    while(i < 100)
    {
        this->ideas[i] = "stolen " + other.ideas[i];
        i++;
    }

    return (*this);
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain: copy constructor" << std::endl;

    *this = other;
}

std::string Brain::getIdea(int index) const
{
    std::string idea;

    if (index < 0 || index >= 100)
        return idea;

    idea = ideas[index];

    return (idea);
}

void    Brain::setIdea(std::string idea, int index)
{
    if (index < 0 || index >= 100)
        return ;

    ideas[index] = idea;
}
