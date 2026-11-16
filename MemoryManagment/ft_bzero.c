/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaura <malaura@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 09:14:01 by malaura           #+#    #+#             */
/*   Updated: 2026/11/16 09:24:44 by malaura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
// s > generic pointer to the starting memory address 
// n > the exact number of bytes to erase
// turns to void because it modifies the memory directly in place
{
	ft_memset(s, 0, n);
	// instead of writing a new loop to set each byto to zero
	// passes the destination pointer s, the integ 0 
	// wich ft_memset casto to unsigned char), and the byte count n.
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str[5] = "testq";
// 	int i = 0;
// 	while (i < 5)
// 		printf("%d",str[i++]);
// 	ft_bzero(str, 4);
// 	i = 0;
// 	printf("\n");
// 	while (i < 5)
// 		printf("%d",str[i++]);
// 	return (0);
// }

