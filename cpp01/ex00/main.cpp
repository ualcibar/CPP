/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:40:01 by ualcibar          #+#    #+#             */
/*   Updated: 2023/01/20 17:38:48 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::cout << "Create the first zombie called Unai without the function" << std::endl;
    Zombie unai("Unai");
    std::cout << "Annuncing the zombie Unai" << std::endl;
    unai.announce();
    std::cout << std::endl;
    std::cout << "Create the second zombie called Ane with the function" << std::endl;
    Zombie *ane = newZombie("Ane");
    std::cout << "Annuncing the zombie Ane" << std::endl;
    ane->announce();
	delete ane;
	std::cout << "RandomChamp of the zombie Gorka" << std::endl;
	randomChump("Gorka");
}