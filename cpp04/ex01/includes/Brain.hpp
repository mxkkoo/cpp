/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoussou <kyoussou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:24:37 by kyoussou          #+#    #+#             */
/*   Updated: 2026/01/26 15:51:04 by kyoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Brain
{
	private:
		std::string	_ideas[100];

	public:
		Brain();
		Brain(std::string ideas[100]);
		Brain(const Brain &other);
		Brain	&operator=(const Brain &other);
		~Brain();
};
