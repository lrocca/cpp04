/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:43:32 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/30 11:13:55 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal {
	protected:
		Animal();

		std::string	type;
	public:
		Animal(const Animal& other);
		virtual ~Animal();

		Animal&	operator=(const Animal& other);

		std::string const	&getType(void) const;
		virtual void		makeSound(void) const = 0;
};

#endif
