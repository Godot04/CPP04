/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 11:50:14 by opopov            #+#    #+#             */
/*   Updated: 2025/09/11 15:16:31 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "----- Right Polymorphism -------" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;

	std::cout << "\n------- Wrong Polymorphism ---------" << std::endl;
	const WrongAnimal* meta1 = new WrongAnimal();
	const WrongAnimal* i1 = new WrongCat();
	std::cout << i1->getType() << " " << std::endl;
	i1->makeSound(); //will output the wrong cat sound!
	meta1->makeSound();
	delete meta1;
	delete i1;

	return 0;
}
