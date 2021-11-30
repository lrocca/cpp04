/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 21:05:14 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/30 11:59:59 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AMateria.hpp"

AMateria::AMateria() {};

AMateria::AMateria(const AMateria& other): type(other.type) {};

AMateria::AMateria(const std::string& type): type(type) {}

AMateria&	AMateria::operator=(const AMateria& other) {
	if (this != &other) {}
	return *this;
}

const std::string&	AMateria::getType() const {
	return type;
}
