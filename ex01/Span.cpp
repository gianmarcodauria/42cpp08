/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 17:07:48 by gd-auria          #+#    #+#             */
/*   Updated: 2025/06/25 15:53:24 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
 
Span::Span(unsigned int N) : _maximumSize(N) {}
 
Span::~Span() {}
 
void Span::addNumber(int number)
{
    if (_num.size() >= _maximumSize)
        throw std::runtime_error("Span is full");
    _num.push_back(number);
}
 
int Span::shortestSpan() const
{
    if (_num.size() < 2)
        throw std::runtime_error("Not enough numbers to find a span");
 
    std::vector<int> sorted = _num;
    std::sort(sorted.begin(), sorted.end());
 
    int minSpan = INT_MAX;
    for (size_t i = 1; i < sorted.size(); ++i) {
        int span = sorted[i] - sorted[i - 1];
        if (span < minSpan)
            minSpan = span;
    }
    return minSpan;
}
 
int Span::longestSpan() const
{
    if (_num.size() < 2)
        throw std::runtime_error("Not enough numbers to find a span");
 
    int min = *std::min_element(_num.begin(), _num.end());
    int max = *std::max_element(_num.begin(), _num.end());
    return max - min;
}