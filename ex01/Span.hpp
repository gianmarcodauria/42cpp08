/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 16:46:07 by gd-auria          #+#    #+#             */
/*   Updated: 2025/06/25 16:03:32 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <climits>

class Span
{
    private:
        std::vector<int> _num;
        unsigned int _maximumSize;

    public:
        Span(unsigned int n);
        ~Span();
        
        int shortestSpan() const;
        int longestSpan() const;
        void addNumber(int num);

        template<typename _iterator_input>
        void addRange(_iterator_input start, _iterator_input end)
        {
            if (static_cast<unsigned int>(_num.size() + std::distance(start, end)) > _maximumSize)
                throw std::runtime_error("Over maximum capacity");
            _num.insert(_num.end(), start, end);
        }
};

#endif