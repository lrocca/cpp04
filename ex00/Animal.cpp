/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:43:29 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/30 11:02:40 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal(): type("Animal") {
	std::cout << "Animal\tconstructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal\tdestructor called" << std::endl;
}

Animal::Animal(const Animal& other) {
	*this = other;
}

Animal&	Animal::operator=(const Animal& other) {
	if (this != &other) { }
	return *this;
}

std::string const	&Animal::getType(void) const {
	return type;
}

void	Animal::makeSound(void) const {
	std::cout << "Animal says \"animal sound\"" << std::endl;
}
