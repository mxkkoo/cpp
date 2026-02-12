/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoussou <kyoussou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:50:08 by kyoussou          #+#    #+#             */
/*   Updated: 2026/01/20 16:50:29 by kyoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
  std::cout << "\n------constructor------\n" << std::endl;
  std::cout << "--ClapTrap--" << std::endl;
  ClapTrap claptrap("solid snake");
  std::cout << "\n--ScavTrap--" << std::endl;
  ScavTrap scav("ziak");

  std::cout << "\n--------claptrap---------\n" << std::endl;
  claptrap.attack("mario");
  claptrap.takeDamage(11);
  claptrap.beRepaired(5);

  std::cout << "\n--------scavtrap---------\n" << std::endl;
  scav.attack("mario");
  scav.takeDamage(11);
  scav.beRepaired(5);
  scav.takeDamage(200);
  scav.beRepaired(10);
  scav.guardGate();
  std::cout << "\n------destructor------" << std::endl;
  return 0;
}
