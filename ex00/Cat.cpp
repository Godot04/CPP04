/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 11:52:20 by opopov            #+#    #+#             */
/*   Updated: 2025/09/11 13:15:55 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor has been called!" << std::endl;
	type = "cat";
}

Cat::~Cat()
{
	std::cout << "Cat destructor has been called!" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}
