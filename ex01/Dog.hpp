/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:46:18 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/30 11:12:30 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal {
	private:
		Brain*	brain;
	public:
		Dog();
		Dog(const Dog& other);
		~Dog();

		Dog&	operator=(const Dog& other);

		virtual void	makeSound(void) const;
};

#endif
