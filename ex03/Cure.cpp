/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 21:05:08 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/26 21:05:08 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {
}

Cure::~Cure() {
}

Cure::Cure(Cure& const other) {
	*this = other;
}

Cure&	Cure::operator=(Cure& const other) {
	if (this != &other) {
	}
	return *this;
}
