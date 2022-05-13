/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:51:23 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/13 12:06:40 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./losers.hpp"
#include <string>

void    ft_errors(std::string msg)
{
    std::cout << msg << std::endl;
}

int main(int ac, char **av)
{
    std::ofstream	outfile;
    std::ifstream	infile;
	std::string 	line;
	int	i;
	size_t	j;

    if (ac != 4)
    {
        ft_errors("error arguments!!");
		exit(EXIT_FAILURE);
    }
    infile.open(av[1]);
	std::string myfile = av[1] + std::string(".replace");
	outfile.open(myfile);
	if (infile.is_open())
	{
		i = 0;
		while (getline(infile, line))
		{
			while ((j = line.find(av[2])) != std::string::npos)
			{
				line.erase(j, strlen(av[2]));
				line.insert(j, av[3]);
			}
			outfile << line << std::endl;
		}
		infile.close();
		outfile.close();
	}
	else
	{
		ft_errors("file Not Appened");
		exit(EXIT_FAILURE);
	}
}