/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 11:51:52 by opopov            #+#    #+#             */
/*   Updated: 2025/09/11 13:16:18 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor has been called!" << std::endl;
	type = "dog";
}

Dog::~Dog()
{
	std::cout << "Dog destructor has been called!" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}
