/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaura <malaura@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:33:23 by malaura           #+#    #+#             */
/*   Updated: 2026/11/19 10:40:11 by malaura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*It checks if the character falls strictly within the standard ASCII */

int	ft_isdigit(int n)
{
	return (n >= '0' && n <= '9');
}

/*
#include <stdio.h>
#include <ctype.h>

int testing(int n)
{	
	int exp = ft_isdigit(n) != 0;
	int ret = isdigit(n) != 0;

	if (exp == ret)
		printf ("\n OK! %d | EXP %d | RET %d", n, exp, ret);
	

	else
		printf ("\n FAIL! %d | EXP %d | RET %d", n, exp, ret);
	return (0);
}

int main(void)
{
	printf ("\n Boundaries values \n %d", testing (-1));
	printf ("\n Normal caracters \n %d", testing ('T'));
	printf ("\n Extrem  values \n %d", testing (1000));
	printf ("\n Values \n %d", testing ('5'));

	return (0);
}*/
