/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:46:03 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/30 11:04:26 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat(): Animal() {
	std::cout << "Cat\tdefault constructor called" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::~Cat() {
	std::cout << "Cat\tdestructor called" << std::endl;
	delete brain;
}

Cat::Cat(const Cat& other) {
	std::cout << "Cat\tcopy constructor called" << std::endl;
	delete brain;
	brain = new Brain(*other.brain);
}

Cat&	Cat::operator=(const Cat& other) {
	if (this != &other) {
		delete brain;
		brain = new Brain(*other.brain);
	}
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "Cat says \"miao miao\"" << std::endl;
}
