/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoussou <kyoussou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 18:03:00 by kyoussou          #+#    #+#             */
/*   Updated: 2026/02/20 18:13:49 by kyoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->_fixedValue = 0;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed::Fixed(const float floatValue)
{
	this->_fixedValue = roundf(floatValue * (1 << this->_fracBits));
	std::cout << "Float constructor called\n";
}

Fixed::Fixed(const int intValue)
{
	this->_fixedValue = intValue << this->_fracBits;
	std::cout << "Int constructor called\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignement operator called\n";
	this->_fixedValue = other.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &output, const Fixed &other)
{
	output << other.toFloat();
	return (output);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits called\n";
	return (this->_fixedValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedValue = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float) this->_fixedValue / (1 << this->_fracBits));
}

int		Fixed::toInt(void) const
{
	return (this->_fixedValue >> this->_fracBits);
}
