/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Color.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:50:11 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/05 13:55:14 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define RESET   "\033[0m"       // Réinitialiser les couleurs

// Couleurs du texte
#define BLACK   "\033[30m"      // Noir
#define RED     "\033[31m"      // Rouge
#define GREEN   "\033[32m"      // Vert
#define YELLOW  "\033[33m"      // Jaune
#define BLUE    "\033[34m"      // Bleu
#define MAGENTA "\033[35m"      // Magenta
#define CYAN    "\033[36m"      // Cyan
#define WHITE   "\033[37m"      // Blanc

// Couleurs de fond
#define BG_BLACK   "\033[40m"   // Fond noir
#define BG_RED     "\033[41m"   // Fond rouge
#define BG_GREEN   "\033[42m"   // Fond vert
#define BG_YELLOW  "\033[43m"   // Fond jaune
#define BG_BLUE    "\033[44m"   // Fond bleu
#define BG_MAGENTA "\033[45m"   // Fond magenta
#define BG_CYAN    "\033[46m"   // Fond cyan
#define BG_WHITE   "\033[47m"   // Fond blanc

// Styles de texte
#define BOLD      "\033[1m"    // Gras
#define DIM       "\033[2m"    // Faible
#define UNDERLINE "\033[4m"    // Souligné
#define REVERSED  "\033[7m"    // Inversé
