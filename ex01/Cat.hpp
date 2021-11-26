/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:46:10 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/26 18:09:30 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal {
	private:
		Brain*	brain;
	public:
		Cat();
		~Cat();
		Cat(Cat const &other);
		Cat&	operator=(Cat const &other);

		virtual void	makeSound(void) const;
};

#endif
