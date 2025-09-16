/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 11:48:34 by opopov            #+#    #+#             */
/*   Updated: 2025/09/15 13:07:52 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(Animal &animal);
		Animal &operator=(Animal &animal);
		virtual ~Animal();
		virtual void makeSound() const;
		virtual std::string getType() const;
};

#endif
