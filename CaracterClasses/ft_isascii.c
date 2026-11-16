/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaura <malaura@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:54:33 by malaura           #+#    #+#             */
/*   Updated: 2026/11/13 11:32:53 by malaura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This Function checks if a char is para of ascii table*/

int ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return(0);
}

/* testin
 *
#include <stdio.h>
#include <ctype.h>

int testing(int c)
{
	int ret = ft_isascii(c) != 0;
	int exp = isascii(c) != 0;
	
	if (exp == ret)
		printf ("ok!\n INPUT:%d  EXP: %d | RET: %d", c, exp, ret);
	else 
		printf ("fail! \n INPUT: %d EXP: %d | RET: %d", c, exp, ret);
	
	return(0);
}

int main(void)
{
	testing('a');
	testing(-6);
	testing(1000);
 
 	return(0);
}
*/
