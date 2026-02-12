/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoussou <kyoussou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:50:08 by kyoussou          #+#    #+#             */
/*   Updated: 2026/01/21 14:37:16 by kyoussou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
  std::cout << "\n------constructor------\n" << std::endl;
  std::cout << "--ClapTrap--" << std::endl;
  ClapTrap claptrap("solid snake");
  std::cout << "\n--ScavTrap--" << std::endl;
  ScavTrap scav("ziak");
  std::cout << "\n--FragTrap--" << std::endl;
  FragTrap frag("toji");

  std::cout << "\n--------claptrap---------\n" << std::endl;
  claptrap.attack("a");
  claptrap.takeDamage(11);
  claptrap.beRepaired(5);

  std::cout << "\n--------scavtrap---------\n" << std::endl;
  scav.attack("b");
  scav.takeDamage(11);
  scav.beRepaired(5);
  scav.guardGate();

  std::cout << "\n--------fragtrap---------\n" << std::endl;
  frag.attack("c");
  frag.takeDamage(11);
  frag.beRepaired(5);
  frag.highFivesGuys();

  std::cout << "\n------destructor------" << std::endl;
  return (0);
}
