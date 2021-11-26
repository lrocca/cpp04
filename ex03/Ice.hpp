/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 21:04:59 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/26 21:05:29 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria {
	private:

	public:
		Ice();
		~Ice();
		Ice(Ice& const other);
		Ice&	operator=(Ice& const other);
};

#endif
