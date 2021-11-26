/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 21:05:03 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/26 21:05:03 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {
}

Ice::~Ice() {
}

Ice::Ice(Ice& const other) {
	*this = other;
}

Ice&	Ice::operator=(Ice& const other) {
	if (this != &other) {
	}
	return *this;
}
