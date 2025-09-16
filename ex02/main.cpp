/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 11:50:14 by opopov            #+#    #+#             */
/*   Updated: 2025/09/16 10:33:07 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog_and_Cat.hpp"

int main()
{
	std::cout << "====== Testing polymorphism =====" << std::endl;
	Animal *animals[2] = {new Dog(), new Cat()};
	std::cout << std::endl;
	for (int i = 0; i < 2; i++)
	{
		std::cout <<  animals[i]->getType() << "[" << i << "] "
			<< " making sounds ";
		animals[i]->makeSound();
		std::cout << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < 2; i++)
		delete animals[i];
	// This should NOT compile
	// std::cout << "====== Testing abstract class =====" << std::endl;
	// Animal animal;
	// Animal *animalPtr = new Animal();
	return 0;
}
