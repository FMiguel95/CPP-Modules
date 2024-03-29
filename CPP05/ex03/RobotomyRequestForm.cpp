/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernacar <fernacar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 19:10:54 by fernacar          #+#    #+#             */
/*   Updated: 2024/03/25 19:10:54 by fernacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request", 72, 45), _target("") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : Form("Robotomy Request", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) : Form(src), _target(src._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm& src)
{
	if (this != &src)
	{
		_target = src._target;
	}
	return *this;
}

void RobotomyRequestForm::formEffect() const
{
	std::srand(std::time(0));
	if (std::rand() %2)
		std::cout << "*DRILL NOISES* " << _target << " robotomized successfully." << std::endl;
	else
		std::cout << "Robotomy failed." << std::endl;
}
