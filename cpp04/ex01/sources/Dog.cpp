/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoussou <kyoussou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:10:31 by kyoussou          #+#    #+#             */
/*   Updated: 2026/01/21 17:00:17 by kyoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	this->_Brain = new Brain();
	std::cout << "Dog created\n";
}

Dog::Dog(const Dog &other)
{
	this->_Brain = new Brain();
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	this->_type = other._type;
	this->_Brain = other._Brain;
	return (*this);
}

void Dog::makeSound(void) const
{
	delete this->_Brain;
	std::cout << "ouaf\n";
}

std::string	Dog::getType(void) const
{
	return (this->_type);
}

Dog::~Dog(void)
{
	std::cout << "Dog destroyed\n";
}
