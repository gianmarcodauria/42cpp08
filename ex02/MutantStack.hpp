/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 13:48:05 by gd-auria          #+#    #+#             */
/*   Updated: 2025/06/09 14:19:26 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <stack>
#include <deque>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() {}
        MutantStack(const MutantStack& copy) : std::stack<T>(copy) {}
        MutantStack& operator=(const MutantStack& copy)
        {
            if (this != &copy)
                std::stack<T>::operator=(copy);
            return *this;
        }
        ~MutantStack() {}

        typedef typename std::stack<T>::container_type::iterator it;
        typedef typename std::stack<T>::container_type::const_iterator const_it;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_it;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_it;

        it begin() { return this->c.begin();}
        it end() { return this->c.end(); }
        const_it begin() const { return this->c.begin(); }
        const_it end() const { return this->c.end(); }
        reverse_it rbegin() { return this->c.rbegin(); }
        reverse_it rend() { return this->c.rend(); }
        const_reverse_it rbegin() const { return this->c.rbegin(); }
        const_reverse_it rend() const { return this->c.rend(); }
};

#endif