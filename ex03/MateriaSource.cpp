/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:27:55 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/27 19:46:55 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): known(new AMateria*[KNOWN_SIZE]) {
	for (size_t i = 0; i < KNOWN_SIZE; i++)
		known[i] = NULL;
}

MateriaSource::~MateriaSource() {
	for (size_t i = 0; i < KNOWN_SIZE; i++)
		if (known[i])
			delete known[i];
	delete [] known;
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	*this = other;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other) {
	if (this != &other) {
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* m) {
	size_t	i = 0;

	for (; i < KNOWN_SIZE && known[i]; i++)
		;

	if (i == KNOWN_SIZE)
		return ;

	known[i] = m;
}

AMateria*	MateriaSource::createMateria(const std::string& type) {
	for (size_t i = 0; i < KNOWN_SIZE; i++)
		if (known[i]->getType() == type)
			return known[i]->clone();

	return NULL;
}
