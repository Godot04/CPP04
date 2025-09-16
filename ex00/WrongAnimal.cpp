/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 13:55:27 by opopov            #+#    #+#             */
/*   Updated: 2025/09/11 13:59:56 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Animal")
{
	std::cout << "WrongAnimal constructor has been called!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor has been called!" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Made sound of some wrong animal..." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type);
}
