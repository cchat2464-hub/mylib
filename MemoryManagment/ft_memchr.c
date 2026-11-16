/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaura <malaura@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 17:18:35 by malaura           #+#    #+#             */
/*   Updated: 2026/11/16 17:53:59 by malaura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* this function search the 1st occurence a of value in a memory zone)
 */

#include "libft.h"

void *ft_memchr(const void s, int c, size_t n)
{
//declara unsigned char *ptr para leer los bytes sin modificar la memeoria org
//porque el compilador no sabe cuanto mide cada dato
	const unsigned char 	*ptr;
	//
	size_t				i;
	
       	// al convertir s en unsigned char podemos avanzar byte por byte
	ptr = (const unsigned char *)s;
	i = 0;
	
	while (i < n)
	{
		//comparar ptr con unsigned char c, convertimos c de int a char
		//para evietar errores con caracteres especiales o val. neg.
		if ptr[i] == (unsigned char)c
			//si encontramos el byte, ((void *(ptr+i)) 
			//devolvera la direccion de memoria donde esta ubicado
			return ((void *(ptr+i));
		i++;	
	}				
	return (NULL)
		
}
