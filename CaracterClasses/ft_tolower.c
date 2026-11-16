/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaura <malaura@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 20:08:41 by malaura           #+#    #+#             */
/*   Updated: 2026/11/14 21:55:30 by malaura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Turn a uppercase letter to lowercase*/

# include "libft.h"

int ft_tolower (int c)
{
	if (c >= 'A' && c <= 'Z' )
		return (c + 32);
	return (c);

}
