/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 21:00:31 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/30 12:04:26 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {
	private:
		AMateria();
	protected:
		std::string	type;
	public:
		AMateria(const AMateria& other);
		AMateria(const std::string& type);
		virtual ~AMateria() {};

		AMateria&	operator=(const AMateria& other);

		const std::string&	getType(void) const;

		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter& target) = 0;
};

#endif
