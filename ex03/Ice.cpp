/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 21:05:03 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/27 17:31:39 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Ice.hpp"

Ice::Ice(): AMateria("ice") { }

Ice::~Ice() { }

Ice::Ice(const Ice& other): AMateria(other.type) { }

Ice&	Ice::operator=(const Ice& other) {
	(void)other;
	return *this;
}

AMateria*	Ice::clone(void) const {
	return new Ice();
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
