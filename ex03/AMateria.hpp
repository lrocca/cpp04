/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 21:00:31 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/26 21:03:33 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include "ICharacter.hpp"

class AMateria {
	protected:
		std::string	type;
	public:
		AMateria(const std::string & type);
		virtual ~AMateria();

		const std::string&	getType() const; // Returns the materia type
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif
