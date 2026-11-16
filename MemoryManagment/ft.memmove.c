/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaura <malaura@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 09:53:52 by malaura           #+#    #+#             */
/*   Updated: 2026/11/16 10:39:49 by malaura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				id;
	const unsigned char	*source;
	unsigned char		*destin;

	source = src;
	destin = dest;
	if (destin > source)
	{
		id = n;
		while (id > 0)
		{
			id--;
			destin[id] = source[id];
		}
	}
	else
	{
		id = 0;
		while (id < n)
		{
			destin[id] = source[id];
			id++;
		}
	}
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	dest_before[7] = "abcdef";
// 	char	dest_after[7] = "abcdef";

// 	ft_memmove(dest_before, dest_before + 2, 4);
// 	printf("Destination avant source : %s\n", dest_before);
// 	ft_memmove(dest_after + 2, dest_after, 4);
// 	printf("Destination apres source : %s\n", dest_after);
// 	return (0);
// }
