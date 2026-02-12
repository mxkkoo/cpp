/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoussou <kyoussou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:07:20 by kyoussou          #+#    #+#             */
/*   Updated: 2026/01/20 16:48:17 by kyoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Trap created: Default constructor\n";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	this->_name = "Trap";
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap " << name << " created: Parameterized constructor\n";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	this->_name = name;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	this->_name = other._name;
	this->_attackDamage = other._attackDamage;
	this->_energyPoints = other._energyPoints;
	this->_hitPoints = other._hitPoints;
	std::cout << "Assignement operator called\n";
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (!this->_hitPoints)
		std::cout << this->_name << " tried to attack but it has no hit points!\n";
	else if (!this->_energyPoints)
		std::cout << this->_name << " tried to attack but it has no energy left!\n";
	else
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!\n";
		this->_energyPoints --;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->_hitPoints)
		std::cout << this->_name << " was attacked but it has no hit points!\n";
	else
	{
		std::cout << this->_name << " took " << amount << " damage!\n";
		if (amount >= (unsigned int) this->_hitPoints)
			this->_hitPoints = 0;
		else
			this->_hitPoints -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->_hitPoints)
		std::cout << this->_name << " tried to repair itself but it has no hit points!\n";
	else if (!this->_energyPoints)
		std::cout << this->_name << " tried to repair itself but it has no energy points!\n";
	else
	{
		std::cout << this->_name << " healed " << amount << " hit points!\n";
		this->_hitPoints += amount;
		this->_energyPoints --;
	}
}

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << " destroyed\n";
}
