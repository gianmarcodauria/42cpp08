/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 14:41:22 by gd-auria          #+#    #+#             */
/*   Updated: 2025/06/06 18:44:33 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <stdexcept>
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T& container, int val)
{
    typename T::iterator it_variable = std::find(container.begin(), container.end(), val);
    if (it_variable == container.end())
        throw std::runtime_error("Value not found");
    return it_variable;
}


#endif