/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sungho <Sungho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 20:57:07 by Sungho            #+#    #+#             */
/*   Updated: 2024/02/11 16:53:21 by Sungho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "Error: could not open file." << std::endl;
		return (1);
	}
	else if (argc > 2)
	{
		std::cout << "Error: can open 1 file." << std::endl;
		return (1);
	}
	BitcoinExchange bit;
	bit.calc(argv[1]);
	return (0);
}