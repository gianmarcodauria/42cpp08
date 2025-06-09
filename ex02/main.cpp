/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 14:07:40 by gd-auria          #+#    #+#             */
/*   Updated: 2025/06/09 14:25:25 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"
#include <list>
 
int main(int argc, char **argv)
{
    if (argc > 1)
        return 1;
    (void) argv;

    std::cout << " MutantStack test " << std::endl;
    MutantStack<int> mstack; 
    mstack.push(5);
    mstack.push(17);
    std::cout << "Top: " << mstack.top() << std::endl;
 
    mstack.pop();
    std::cout << "Size: " << mstack.size() << std::endl;
 
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
 
    MutantStack<int>::it it = mstack.begin();
    MutantStack<int>::it ite = mstack.end();
 
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int> s(mstack);  // compatibile con std::stack
    {
        std::cout << "\n Comparison with std::list " << std::endl;
        std::list<int> lst; 
        
        lst.push_back(5);
        lst.push_back(17);
        std::cout << "Back: " << lst.back() << std::endl;
     
        lst.pop_back();
        std::cout << "Size: " << lst.size() << std::endl;
     
        lst.push_back(3);
        lst.push_back(5);
        lst.push_back(737);
        lst.push_back(0);
        
        std::list<int>::iterator it = lst.begin();
        std::list<int>::iterator ite = lst.end();
     
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        
    }
    return 0;
}