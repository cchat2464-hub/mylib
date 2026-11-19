/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaura <malaura@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 21:30:32 by malaura           #+#    #+#             */
/*   Updated: 2026/11/19 21:36:07 by malaura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0'
		&& (unsigned char)s1[i] == (unsigned char)s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
// Abrimos nuestra caja de herramientas de la librería libft
#include "libft.h"

// Definimos la máquina: recibe dos palabras (s1 y s2) y el límite de letras a revisar (n)
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	// Preparamos un contador (un dedo señalador) para ir letra por letra desde el principio
	size_t	i;

	// Ponemos el contador en la primera posición (el cero)
	i = 0;
	// Repetimos mientras:
	// 1. No hayamos llegado al límite de letras que nos pidieron revisar (i < n)
	// 2. La primera palabra no se haya acabado todavía (s1[i] != '\0')
	// 3. Las dos letras en esta posición sean exactamente iguales (usando unsigned char para evitar errores con símbolos raros o tildes)
	while (i < n && s1[i] != '\0'
		&& (unsigned char)s1[i] == (unsigned char)s2[i])
	{
		// Si son iguales, movemos el dedo a la siguiente letra
		i++;
	}
	// Si llegamos al límite 'n' sin encontrar ninguna letra diferente, avisamos con un 0 que son iguales
	if (i == n)
		return (0);
	// Si se detuvo antes porque encontró dos letras distintas (o una palabra acabó antes),
	// restamos el valor numérico (ASCII) de ambas letras y devolvemos esa diferencia
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
