/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoussou <kyoussou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 17:57:55 by kyoussou          #+#    #+#             */
/*   Updated: 2026/02/20 18:07:29 by kyoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					_fixedValue;
		static const int	_fracBits = 8;

	public:
		Fixed();
		Fixed(const Fixed &other);
		~Fixed();
		Fixed	&operator=(const Fixed &other);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
