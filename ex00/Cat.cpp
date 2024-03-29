/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:46:03 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/30 11:47:32 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat(): Animal() {
	std::cout << "Cat\tconstructor called" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& other): Animal(other) {
	std::cout << "Cat\tcopy constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat\tdestructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& other) {
	if (this != &other) {}
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "Cat says \"miao miao\"" << std::endl;
}
