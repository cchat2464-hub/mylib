/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaura <malaura@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 21:57:01 by malaura           #+#    #+#             */
/*   Updated: 2026/11/14 22:08:33 by malaura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/* This function calculate the length of a string (number of caracteres before \0)*/

size_t ft_strlen(const char *s)
{
	size_t len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
