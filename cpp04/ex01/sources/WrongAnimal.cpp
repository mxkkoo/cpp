/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoussou <kyoussou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:53:46 by kyoussou          #+#    #+#             */
/*   Updated: 2026/01/21 17:00:35 by kyoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->_type = "WrongAnimal";
	std::cout << "WrongAnimal created\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	this->_type = other._type;
	return *this;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "hello :)\n";
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destroyed\n";
}
