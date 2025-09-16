/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 15:22:48 by opopov            #+#    #+#             */
/*   Updated: 2025/09/15 12:23:15 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor has been called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "Nothing to think";
}

Brain::Brain(Brain &brain)
{
	std::cout << "Brain copy constructor has been called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = brain.ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain destructor has been called" << std::endl;
}

std::string Brain::get_idea(int index)
{
	if (index < 0 || index > 100)
		return ("Incorrect index");
	return (ideas[index]);
}

void Brain::set_idea(int index, std::string idea)
{
	if (index < 0 || index > 100)
		std::cout << "Incorrect index" << std::endl;
	if (idea.empty())
		std::cout << "What a terrible idea!" << std::endl;
	ideas[index] = idea;
}
