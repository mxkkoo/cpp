/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoussou <kyoussou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:35:29 by kyoussou          #+#    #+#             */
/*   Updated: 2026/01/26 15:50:28 by kyoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp" 

Brain::Brain()
{
	std::cout << "Brain activated\n";
}

Brain::Brain(std::string ideas[100])
{
	for (int i = 0; i < 99; i++)
		this->_ideas[i] = ideas[i];
	std::cout << "Brain activated\n";
}

Brain::Brain(const Brain &other)
{
	*this = other;
}

Brain	&Brain::operator=(const Brain &other)
{
	for (int i = 0; i < 99; i++)
		this->_ideas[i] = other._ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destroyed\n";
}
