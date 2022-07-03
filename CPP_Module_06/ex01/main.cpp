/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 14:22:42 by msaouab           #+#    #+#             */
/*   Updated: 2022/07/03 13:42:34 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct t_Data
{
	int		count;
	int		CheckData;
}	Data;


uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main()
{

    Data data;

    data.count = 42;
    data.CheckData = 21;

    std::cout << " data.count : " << data.count << std::endl;
    std::cout << " data.data : " << data.CheckData << std::endl;

    uintptr_t rawBits = serialize(&data);
    Data *returnedData = deserialize(rawBits);
    std::cout << " data.count : " << returnedData->count << std::endl;
    std::cout << " data.data : " << returnedData->CheckData <<std::endl;


    return 0;
}