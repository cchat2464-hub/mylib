/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaura <malaura@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 19:41:36 by malaura           #+#    #+#             */
/*   Updated: 2026/11/14 19:45:36 by malaura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function checks if a letter is uppercase)*/

int ft_isupper(int c)
{
	return ( c >='A' && c <='Z');
}

/*
#include <stdio.h>
#include <ctype.h>
int testing (char c)
{
	int esp = isupper(c) != 0;
	int res = ft_isuppec) != 0;

	if (esp == res)
	
	  	printf  ("\n  OK!!  INPUT: %d | ESP: %d  | RES: %d", c, esp, res);
	
	else
		printf  ("\n  FAILL!!  INPUT: %d | ESP: %d  | RES: %d", c, esp, res);
		
	return (0);
}
int main ()
{
	testing ('h');
	testing ('H');
	testing (' ');
	return (0);
}
*/