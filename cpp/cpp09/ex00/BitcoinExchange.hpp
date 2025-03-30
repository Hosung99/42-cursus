/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sungho <Sungho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 20:53:56 by Sungho            #+#    #+#             */
/*   Updated: 2024/02/11 17:01:19 by Sungho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>

class BitcoinExchange {
	private:
		BitcoinExchange(const BitcoinExchange&);
		BitcoinExchange&	operator=(const BitcoinExchange&);
		std::map<std::string, float>	m;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		void	check_date_validate(std::string);
		float	check_value_validate(std::string);
		void	calc(char *);
};

#endif