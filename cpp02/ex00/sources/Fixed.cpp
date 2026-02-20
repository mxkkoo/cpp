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

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits called\n";
	return (this->_fixedValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedValue = raw;
}
