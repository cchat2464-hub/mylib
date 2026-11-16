/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaura <malaura@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 09:25:07 by malaura           #+#    #+#             */
/*   Updated: 2026/11/16 10:39:55 by malaura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			id;

	id = 0;
	ptr = s;
	while (id < n)
	{
		ptr[id++] = (unsigned char)c;
	}
	return (s);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str[5] = "testq";
// 	int i = 0;
// 	while (i < 5)
// 		printf("%c",str[i++]);
// 	ft_memset(str, 'B', 4);
// 	i = 0;
// 	while (i < 5)
// 		printf("%c",str[i++]);
// 	printf("\n");
// 	int a = -3;
// 	unsigned char c = a;
// 	printf("%i", c);
// 	return (0);
// }
