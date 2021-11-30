/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:41:19 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/30 11:03:06 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main() {
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout	<< j->getType() << std::endl
				<< i->getType() << std::endl;

	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	const WrongAnimal*	wrongA = new WrongAnimal();
	const WrongAnimal*	wrongC = new WrongCat();

	std::cout << wrongA->getType() << std::endl;
	std::cout << wrongC->getType() << std::endl;

	wrongA->makeSound();
	wrongC->makeSound();

	delete wrongA;
	delete wrongC;
}
