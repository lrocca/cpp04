/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:46:03 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/30 11:47:32 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal() {
	std::cout << "WrongCat\tconstructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other) {
	std::cout << "WrongCat\tcopy constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat\tdestructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& other) {
	if (this != &other) {}
	return *this;
}

void	WrongCat::makeSound(void) const {
	std::cout << "WrongCat says \"miao miao\"" << std::endl;
}
