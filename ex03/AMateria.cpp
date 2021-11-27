/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 21:05:14 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/27 17:09:41 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AMateria.hpp"

AMateria::AMateria(const std::string& type): type(type) {
	std::cout << "AMateria constructor called" << std::endl;
}

const std::string&	AMateria::getType() const {
	return type;
}
