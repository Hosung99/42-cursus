/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sungho <Sungho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 22:07:12 by seoson            #+#    #+#             */
/*   Updated: 2024/01/20 18:35:01 by Sungho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// static void print_int(int x)
// {
//   std::cout << x << std::endl;
//   return;
// }

static void print_char(char x)
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int ex_int[] = {97,98,99,100};
  char ex_char[] = "HELLO WORLD!";
  iter(ex_int, 4, print_char);
  iter(ex_char, 12, print_char);
  return 0;
}
