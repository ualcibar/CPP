/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileReplace.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 20:45:04 by ualcibar          #+#    #+#             */
/*   Updated: 2023/01/16 20:45:04 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fileReplace.hpp"
int check_string(std::string s1, std::string s2)
{
    if ((s1.length() == 0) || (s2.length() == 0))
    {
        std::cout << "Worng input on the strings s1 or s2" << std::endl;
        return (1);
    }
    return (0);
}

std::string ext(std::string file_name)
{
	std::string result;
	int position=file_name.find_last_of(".");
	if(position != -1)
	{
		result = file_name.substr(position);
		//std::cout<<"The file "<< file_name<<" has <" << result << "> extension."<< std::endl;
	}
	else		
		result = "";
	return (result);
}

std::string name(std::string file_name)
{
	int position=file_name.find_last_of(".");
	std::string result;
	if(position != -1)
	{
		result = file_name.substr(0, position);
		//std::cout<<"The file "<< file_name<<" has <" << result << "> extension."<< std::endl;
	}
	else
		return(file_name);
    return (result);
}

int fileReplace(std::string filename, std::string s1, std::string s2)
{
    std::fstream    my_file;
    std::ofstream   return_file;

    std::string     content;
    std::string     extension;
	std::string     returnSTR;
    std::string     replace;

    if (check_string(s1, s2))
        return(1);
    
    my_file.open(filename);
    if (my_file.fail())
    {
        std::cout << "cant open file -> " << filename <<  std::endl;
        return (1);
    }
    extension = ext(filename);
    filename = name(filename);
    content = "";
	
	while (!my_file.eof())
	{
		
		getline(my_file, replace);

		int spot;
		while ((spot = replace.find(s1)) >= 0)
		{
			if(spot >= 0 )
     		{
        		std::string tmpstring = replace.substr(0,spot);
        		tmpstring += s2;
        		tmpstring += replace.substr(spot+s1.length(), replace.length());
			}
			replace.replace(spot, s1.length(), s2);
		}
		returnSTR += (replace + "\n");
	}
	returnSTR = returnSTR.substr(0, returnSTR.length() - 1);
    return_file.open((filename + ".replace" + extension));
	if (return_file.fail())
	{
		std::cout << "can't make file \""<< filename + ".replace" << "\"" << std::endl;
		return (1);
	}
    return_file << returnSTR;
    return_file.close();
    return (0);
}

