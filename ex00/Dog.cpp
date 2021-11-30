/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:46:15 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/30 11:47:32 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog(): Animal() {
	std::cout << "Dog\tconstructor called" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog& other): Animal(other) {
	std::cout << "Dog\tcopy constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog\tdestructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& other) {
	if (this != &other) {}
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "Dog says \"bau bau\"" << std::endl;
}
