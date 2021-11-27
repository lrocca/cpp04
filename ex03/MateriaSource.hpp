/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:27:57 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/27 19:44:46 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

# define KNOWN_SIZE	4

class MateriaSource: public IMateriaSource {
	private:
		AMateria**	known;
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource& other);

		MateriaSource&	operator=(const MateriaSource& other);

		virtual void		learnMateria(AMateria* m);
		virtual AMateria*	createMateria(const std::string& type);
};

#endif
