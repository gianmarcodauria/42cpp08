/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 15:07:18 by gd-auria          #+#    #+#             */
/*   Updated: 2025/06/06 15:13:37 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>

int main()
{
    try
    {
        std::vector<int> _vector;
        _vector.push_back(1);
        _vector.push_back(2);
        _vector.push_back(3);
        
        std::vector<int>::iterator _iterator = easyfind(_vector, 3);
        std::cout << "Is in vector " << *_iterator << std::endl;

        std::list<int> _list;
        _list.push_back(15);
        _list.push_front(20);
        _list.push_back(10);

        std::list<int>::iterator _iterator_two = easyfind(_list, 10);
        std::cout << "Is in list " << *_iterator_two << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    
}
