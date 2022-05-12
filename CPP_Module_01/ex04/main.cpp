/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:51:23 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/12 21:06:09 by msaouab          ###   ########.fr       */
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
    std::ofstream    outfile;
    std::ifstream    infile;
	std::string line;
	// std::string myfile = std::string(av[1]);
	int	i;
	int	j;

    if (ac != 4)
    {
        ft_errors("error arguments!!");
		exit(EXIT_FAILURE);
    }
    infile.open(av[1]);
	std::string myfile = av[1] + std::string(".replace");
	outfile.open(myfile);
	// if (!outfile.is_open())
	// {
	// 	ft_errors("file Not Appened");
	// 	exit(EXIT_FAILURE);
	// }
	if (infile.is_open())
	{
		i = 0;
		while (getline(infile, line))
		{
			j = line.find(av[2]);
			if (j != std::string::npos)
			{
				line.erase(j, strlen(av[2]));
				line.insert(j, av[3]);
				outfile << "hi";
				outfile << line << std::endl;
				// outfile << line << std::endl;
				// std::cout << ":333:" << line << std::endl;
			}
			i++;
		}
		infile.close();
		outfile.close();
		// std::cout << "here";
	}
    // read_file(fd);
}