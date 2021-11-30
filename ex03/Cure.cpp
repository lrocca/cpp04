/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 21:05:08 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/27 19:25:06 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Cure.hpp"

Cure::Cure() {
}

Cure::~Cure() {
}

Cure::Cure(const Cure& other) {
	*this = other;
}

Cure&	Cure::operator=(const Cure& other) {
	if (this != &other) {
	}
	return *this;
}

AMateria*	Cure::clone(void) const {
	return new Cure();
}

void		Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
