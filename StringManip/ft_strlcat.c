/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaura <malaura@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 21:05:02 by malaura           #+#    #+#             */
/*   Updated: 2026/11/19 21:28:16 by malaura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* concatenates two strings, return the supposed size*/
char *ft_strlcat(const char s1, const char s2)
{
*/all de posibilities*/
	
	int i = 0;

	while (s1[i])
	if ( '\0')
}
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	//prep contadores
	size_t	i; // c de la las letras nuevas que van entrando
	size_t	dstlen; // c cuantas letras ya habia en la caja
	size_t	srclen; // c cuants letras tiene la palabra nueva

	//ponemos el contador destino en 0
	dstlen = 0;
	srclen = ft_strlen(src);  //contamos la letras que tiene la palabra
	while (dstlen < size && dst[dstlen])
		dstlen++;// si lleg borde no hab ni un hueco lib no met nad y avis cuanto mediria todo
	if (dstlen == size) 
		return (size + srclen); //ponemos en 0 el contador par empz a leer la pal nueva desde letra  
	i = 0;
	// mientras queden letras nuevas y quede espacio en la caja deajno 1 hueco libre 
	while (src[i] && dstlen + i < size - 1)
	{
	//copamos la letra nueva justo detras de las letrs viajes en la caja 
		dst[dstlen + i] = src[i];
		i++;
	}
	//ponemos tapon
	dst[dstlen + i] = '\0';
	//devolvmeo la suma total de las letras que queriamos juntar, hayan cabido o no
	return (dstlen + srclen);
}
