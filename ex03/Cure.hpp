/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 21:05:05 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/27 19:22:52 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria {
	private:

	public:
		Cure();
		Cure(const Cure& other);
		~Cure();

		Cure&	operator=(const Cure& other);

		virtual AMateria*	clone(void) const;
		virtual void		use(ICharacter& target);
};

#endif
