/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog_and_Cat.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 10:11:46 by opopov            #+#    #+#             */
/*   Updated: 2025/09/15 13:19:20 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog_and_Cat.hpp"

// ----------------------------DOG-----------------------

Dog::Dog()
{
	std::cout << "Dog constructor has been called!" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(Dog &dog) : Animal(dog)
{
	std::cout << "Dog copy constructor has been called!" << std::endl;
	brain = new Brain(*dog.brain);
}

Dog::~Dog()
{
	std::cout << "Dog destructor has been called!" << std::endl;
	delete brain;
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

std::string Dog::getIdea(int index)
{
	return (brain->get_idea(index));
}

void Dog::setIdea(int index, std::string idea)
{
	brain->set_idea(index, idea);
}

Dog &Dog::operator=(Dog &dog)
{
	std::cout << "Dog assignment operator has been called" << std::endl;
	if (this == &dog)
		return (*this);
	Animal::operator=(dog);
	delete brain;
	brain = new Brain(*dog.brain);
	return (*this);
}

// -------------------------CAT-------------------------

Cat::Cat()
{
	std::cout << "Cat constructor has been called!" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(Cat &cat) : Animal(cat)
{
	std::cout << "Cat copy constructor has been called!" << std::endl;
	brain = new Brain(*cat.brain);
}

Cat::~Cat()
{
	std::cout << "Cat destructor has been called!" << std::endl;
	delete brain;
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}


std::string Cat::getIdea(int index)
{
	return (brain->get_idea(index));
}

void Cat::setIdea(int index, std::string idea)
{
	brain->set_idea(index, idea);
}

Cat &Cat::operator=(Cat &cat)
{
	std::cout << "Cat assignment operator has been called" << std::endl;
	if (this == &cat)
		return (*this);
	Animal::operator=(cat);
	delete brain;
	brain = new Brain(*cat.brain);
	return (*this);
}
