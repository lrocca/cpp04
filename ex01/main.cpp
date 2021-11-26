/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:41:19 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/26 20:47:36 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define ZOO_SIZE 4

int	main() {
	{
		const Animal*	zoo[ZOO_SIZE];

		for (int i = 0; i < ZOO_SIZE / 2; i++)
			zoo[i] = new Cat();

		for (int i = ZOO_SIZE / 2; i < ZOO_SIZE; i++)
			zoo[i] = new Dog();

		for (int i = 0; i < ZOO_SIZE; i++)
			zoo[i]->makeSound();

		for (int i = 0; i < ZOO_SIZE; i++)
			delete zoo[i];
	}

	{
		Brain*	normal = new Brain();

		normal->setIdea("My name is AB");
		normal->setIdea("I like watching movies");
		normal->setIdea("My favourite is Frankenstein Junior");

		normal->printIdeas();

		Brain*	abnormal = new Brain(*normal);

		delete normal;

		abnormal->printIdeas();

		delete abnormal;
	}
}
