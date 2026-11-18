/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaura <malaura@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 13:36:52 by malaura           #+#    #+#             */
/*   Updated: 2026/11/18 13:37:54 by malaura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* this function dublicate de string*/
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	i;

	copy = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
