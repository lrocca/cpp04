/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:46:03 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/25 22:10:44 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Cat.hpp"

Cat::Cat(): Animal() {
	std::cout << "Cat\tconstructor called" << std::endl;
	type = "Cat";
}

Cat::~Cat() {
	std::cout << "Cat\tdestructor called" << std::endl;
}

Cat::Cat(const Cat& other) {
	*this = other;
}

Cat&	Cat::operator=(const Cat& other) {
	if (this != &other) { }
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "Cat says \"miao miao\"" << std::endl;
}
