/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:50:25 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/26 20:24:18 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain {
	private:
		std::string	ideas[100];
		int			index;
	public:
		Brain();
		~Brain();
		Brain(const Brain& other);
		Brain&	operator=(const Brain& other);

		void	setIdea(const std::string& idea);
		void	printIdeas(void) const;
};

#endif
