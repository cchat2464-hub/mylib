/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaura <malaura@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 22:12:25 by malaura           #+#    #+#             */
/*   Updated: 2026/11/14 22:19:24 by malaura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	size_t i;
	i = 0;
	while (s[i] != '\0')
	{
		if ((unsigned char) s[i] == (unsigned char)c)
			return (char *)&s[i];
		i++;
	}
	if ((unsigned char)s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	return (NULL);
}

#include <stdio.h>
int main(void)
{
	char str[10] = "abecdeffgj";
	printf ("%s", ft_ft_strchr(str,'e'));
	return 0;
}
