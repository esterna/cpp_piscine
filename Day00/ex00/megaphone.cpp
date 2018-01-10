/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 19:05:08 by esterna           #+#    #+#             */
/*   Updated: 2018/01/09 19:54:17 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int				main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i = 1; i < argc; i++)
		std::cout << argv[i];
	std::cout << std::endl;
	return 0;
}
