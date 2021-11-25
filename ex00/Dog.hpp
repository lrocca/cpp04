/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:46:18 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/25 22:07:39 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal {
	public:
		Dog();
		~Dog();
		Dog(const Dog& other);
		Dog&	operator=(const Dog& other);

		virtual void	makeSound(void) const;
};

#endif
