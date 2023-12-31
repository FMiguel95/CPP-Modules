/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernacar <fernacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 22:03:26 by fernacar          #+#    #+#             */
/*   Updated: 2023/12/26 21:35:51 by fernacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include <iostream>
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice& src);
		// Ice& operator =(const Ice& src);
		~Ice();

		AMateria* clone() const;
		void use(ICharacter& target);

	private:
		
};

#endif
