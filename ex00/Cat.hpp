/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:46:10 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/30 11:11:47 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal {
	public:
		Cat();
		Cat(Cat const &other);
		~Cat();

		Cat&	operator=(Cat const &other);

		virtual void	makeSound(void) const;
};

#endif
