/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:50:22 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/30 11:16:30 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain(): index(0) {
	std::cout << "Brain\tdefault constructor called" << std::endl;
}

Brain::Brain(const Brain& other) {
	std::cout << "Brain\tcopy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
}

Brain::~Brain() {
	std::cout << "Brain\tdestructor called" << std::endl;
}

Brain&	Brain::operator=(const Brain& other) {
	if (this != &other)
		for (int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	return *this;
}

void	Brain::setIdea(const std::string& idea) {
	ideas[index++] = idea;
	index = index % 100;
}

void	Brain::printIdeas(void) const {
	for (int i = 0; i < 100 && !ideas[i].empty(); i++)
		std::cout << i << ": " << ideas[i] << std::endl;
}
