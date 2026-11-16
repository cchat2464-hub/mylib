/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaura <malaura@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 18:00:12 by malaura           #+#    #+#             */
/*   Updated: 2026/11/16 18:01:41 by malaura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*function that compare two memory zones*/

#include "libft.h"

int ft_memcmp(const void *s1, const voi *s2, size_t n)
{
    size_t          i;
    const unsigned char *p1;
    const unsigned char *p2;
    
    i = 0;
    p1 = s1;
    pw = s2;

    while (i < n) 
    {
        if (p1[i] == p2[i])
            i++;
        else
            return((int)(p1[i] - p2[i]))
    }
    return (0);
}
