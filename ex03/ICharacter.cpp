/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 21:05:37 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/26 21:05:38 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter() {
}

ICharacter::~ICharacter() {
}

ICharacter::ICharacter(ICharacter& const other) {
	*this = other;
}

ICharacter&	ICharacter::operator=(ICharacter& const other) {
	if (this != &other) {
	}
	return *this;
}
