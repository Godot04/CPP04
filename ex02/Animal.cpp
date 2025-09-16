/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 11:52:37 by opopov            #+#    #+#             */
/*   Updated: 2025/09/16 10:07:10 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal constructor has been called!" << std::endl;
}

Animal::Animal(Animal &animal): type(animal.type)
{
	std::cout << "Animal copy constructor has been called!" << std::endl;
}


Animal::~Animal()
{
	std::cout << "Animal destructor has been called!" << std::endl;
}

// void Animal::makeSound() const
// {
// 	std::cout << "Made sound of some animal..." << std::endl;
// }

std::string Animal::getType() const
{
	return (type);
}

Animal &Animal::operator=(Animal &animal)
{
	std::cout << "Animal assignment operator has been called!" << std::endl;
	if (this == &animal)
		return (*this);
	type = animal.type;
	return (*this);
}
