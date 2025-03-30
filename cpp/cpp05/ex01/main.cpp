/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sungho <Sungho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 22:03:31 by Sungho            #+#    #+#             */
/*   Updated: 2024/01/13 15:11:28 by Sungho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat	*a = NULL;
	Form		*form = NULL;
	try
	{
		a = new Bureaucrat("seoson1", 150);
		form = new Form("form",2,2);
		std::cout << *form << std::endl;
		a->signForm(*form);
		std::cout << *form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	// try
	// {
	// 	a = new Bureaucrat("seoson1", 1);
	// 	form = new Form("form",2,2);
	// 	std::cout << *form << std::endl;
	// 	form->beSigned(*a);
	// 	std::cout << *form << std::endl;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	delete a;
	delete form;
	return (0);
}
