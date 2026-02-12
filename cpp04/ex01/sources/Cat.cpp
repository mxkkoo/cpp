/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoussou <kyoussou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:09:18 by kyoussou          #+#    #+#             */
/*   Updated: 2026/01/21 17:00:08 by kyoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	this->_Brain = new Brain();
	std::cout << "Cat created\n";
}

Cat::Cat(const Cat &other)
{
	this->_Brain = new Brain();
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	this->_type = other._type;
	this->_Brain = other._Brain;
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "miaou\n";
}

std::string	Cat::getType(void) const
{
	return (this->_type);
}

Cat::~Cat(void)
{
	delete this->_Brain;
	std::cout << "Cat destroyed\n";
}
