/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaura <malaura@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 11:02:52 by malaura           #+#    #+#             */
/*   Updated: 2026/11/16 17:16:30 by malaura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* This function copy a memory zone into another */

# include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
// recibe punteros genericos (void *), para aceptar cualquier tipo de marca (src) como (const)
// n para saber cuantos bytes se va a copiar
{
	size_t i;

	if (!dest && !src)
		return (NULL);

	i = 0;
	while (i < n)
	{
		((unsigned char*)dest)[i] = ((const unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
