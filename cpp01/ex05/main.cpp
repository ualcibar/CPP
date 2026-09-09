/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 10:59:22 by ualcibar          #+#    #+#             */
/*   Updated: 2023/01/20 17:32:44 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main()
{
	Harl Harl;
	
	std::cout << std::endl << "DEBUG:" << std::endl << "\t";
	Harl.complain("DEBUG");
	std::cout << std::endl << "INFO:" << std::endl << "\t";
	Harl.complain("INFO");
	std::cout << std::endl << "WARNING:" << std::endl << "\t";
	Harl.complain("WARNING");
	std::cout << std::endl << "ERROR:" << std::endl << "\t";
	Harl.complain("ERROR");
	std::cout << std::endl << "KAKA:";
	Harl.complain("kaka");
}