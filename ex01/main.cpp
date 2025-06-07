/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 17:10:45 by gd-auria          #+#    #+#             */
/*   Updated: 2025/06/07 17:19:56 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    if (argc > 1)
        return 1;
    (void)argv;

    try
    {
        Span sp = Span(5);
        
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        
        
        Span _range = Span(10000);
        std::vector<int> _value;
        for (int i = 0; i < 10000; ++i)
            _value.push_back(i * 3);
        
        _range.addRange(_value.begin(),  _value.end());
        std::cout << "Range span shortest is: " << _range.shortestSpan() << std::endl;
        std::cout << "Range span longest is: " << _range.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
