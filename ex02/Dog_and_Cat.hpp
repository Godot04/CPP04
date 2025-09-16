/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog_and_Cat.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 10:11:14 by opopov            #+#    #+#             */
/*   Updated: 2025/09/15 12:19:32 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_AND_CAT_HPP
# define DOG_AND_CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog &operator=(Dog &dog);
		Dog(Dog &dog);
		virtual ~Dog();
		virtual void makeSound() const;
		std::string getIdea(int index);
		void setIdea(int index, std::string idea);
};

class Cat: public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat &operator=(Cat &cat);
		Cat(Cat &cat);
		virtual ~Cat();
		virtual void makeSound() const;
		std::string getIdea(int index);
		void setIdea(int index, std::string idea);
};

#endif
