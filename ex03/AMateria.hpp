/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 21:00:31 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/27 19:20:53 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {
	protected:
		std::string	type;
	public:
		AMateria() {};
		AMateria(const std::string& type);
		virtual ~AMateria() {};

		const std::string&	getType(void) const;

		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter& target);
};

#endif
