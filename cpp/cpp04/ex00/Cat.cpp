/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sungho <Sungho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:22:20 by Sungho            #+#    #+#             */
/*   Updated: 2024/01/02 16:21:11 by Sungho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Default Destructor Called" << std::endl;
}

Cat::Cat(const Cat& cat) : Animal(cat)
{
	*this = cat;
}

Cat&	Cat::operator=(const Cat& cat)
{
	if (this == &cat)
		return (*this);
	this->type = cat.getType();
	return (*this);
}

std::string	Cat::getType() const
{
	return (this->type);
}

void	Cat::makeSound()
{
	std::cout << "Meow~ Meow~" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow~ Meow~" << std::endl;
}
