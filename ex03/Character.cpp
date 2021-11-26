/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 21:11:50 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/26 21:11:51 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
}

Character::~Character() {
}

Character::Character(Character& const other) {
	*this = other;
}

Character&	Character::operator=(Character& const other) {
	if (this != &other) {
	}
	return *this;
}
