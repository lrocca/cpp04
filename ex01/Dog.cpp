/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:46:15 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/30 11:04:33 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog(): Animal() {
	std::cout << "Dog\tdefault constructor called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::~Dog() {
	std::cout << "Dog\tdestructor called" << std::endl;
	delete brain;
}

Dog::Dog(const Dog& other) {
	std::cout << "Dog\tcopy constructor called" << std::endl;
	delete brain;
	brain = new Brain(*other.brain);
}

Dog&	Dog::operator=(const Dog& other) {
	if (this != &other) {
		delete brain;
		brain = new Brain(*other.brain);
	}
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "Dog says \"bau bau\"" << std::endl;
}
