/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaura <malaura@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 21:36:37 by malaura           #+#    #+#             */
/*   Updated: 2026/11/19 21:55:00 by malaura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* This function trim a string forma charse*/ 
#include "libft.h"

static char	*auxft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	set_len;

	set_len = ft_strlen(set);
	i = 0;
	while (i < ft_strlen(s1))
	{
		j = 0;
		while (j < set_len && set[j] != s1[i])
			j++;
		if (j == set_len)
			break ;
		i++;
	}
	return ((char *)s1 + i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*noprefix;
	char	*result;
	size_t	i;
	size_t	j;
	size_t	set_len;

	noprefix = auxft_strtrim(s1, set);
	set_len = ft_strlen(set);
	i = ft_strlen(noprefix);
	while (i > 0)
	{
		j = 0;
		while (j < set_len && set[j] != noprefix[i - 1])
			j++;
		if (j == set_len)
			break ;
		i--;
	}
	result = malloc(i + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, noprefix, i + 1);
	return (result);
}

// int main(void){
// 	printf("Le test :%s\n", ft_strtrim("wiwi bonjwiour wi", "wi"));
// 	return 0;
// }
