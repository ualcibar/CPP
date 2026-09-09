/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:53:48 by ualcibar          #+#    #+#             */
/*   Updated: 2023/01/09 17:14:42 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	int len;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		len = std::strlen(argv[i]);
		for (int x = 0; x < len; x++)
		{
			if(argv[i][x] >= 97 && argv[i][x] <= 122)
      		{
				
				argv[i][x] = argv[i][x] - 32;
      		}
		}
		std::cout << argv[i];
	}
	std::cout << "\n";
}