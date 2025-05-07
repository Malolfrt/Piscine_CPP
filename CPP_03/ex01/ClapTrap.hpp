/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:07:00 by mlefort           #+#    #+#             */
/*   Updated: 2024/08/18 18:45:13 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(const ClapTrap &cpy);
        ClapTrap(const std::string name);
        ~ClapTrap();
        ClapTrap& operator=(const ClapTrap &src);
        virtual void attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

    protected:
        std::string     _name;
        int         _hitPoint;
        int         _energyPoint;
        int         _attackDamage;
};