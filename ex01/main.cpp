/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 11:50:14 by opopov            #+#    #+#             */
/*   Updated: 2025/09/15 13:23:15 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog_and_Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\n==== Basic test =====" << std::endl;
	std::cout << j->getType() << ": ";
	j->makeSound();
	std::cout << std::endl;

	std::cout << i->getType() << ": ";
	i->makeSound();
	std::cout << std::endl;

	delete j; //should not create a leak
	delete i;
	{
	std::cout << "\n===== Deep copy test with dogs =====" << std::endl;
	Dog originalDog;
	originalDog.setIdea(0, "I want to eat");
	originalDog.setIdea(1, "I want to play");

	Dog copyDog;
	copyDog = originalDog;
	copyDog.setIdea(0, "I hate cats!");

	std::cout << "\nOriginal dog idea: " << originalDog.getIdea(0) << std::endl;
	std::cout << "Copy dog idea: " << copyDog.getIdea(0) << "\n" << std::endl;
	}
	std::cout << "\n===== Deep copy test with cats =====" << std::endl;
	Cat originalCat;
	originalCat.setIdea(0, "I want to eat mice");
	Cat copyCat;
	copyCat = originalCat;
	copyCat.setIdea(0, "I want to play with mice");
	std::cout << "\nOriginal cat idea: " << originalCat.getIdea(0) << std::endl;
	std::cout << "Copy cat idea: " << copyCat.getIdea(0) << "\n" << std::endl;
	return 0;
}
