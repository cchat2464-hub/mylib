/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaura <malaura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 10:36:32 by malaura           #+#    #+#             */
/*   Updated: 2026/11/19 10:09:37 by malaura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int testing (char c)
{
	int esp = isalpha(c) != 0;
	int res = ft_isalpha(c) != 0;

	if (esp == res)

		printf  ("\n  OK!!  INPUT: %d | ESP: %d  | RES: %d", c, esp, res);

	else
		printf  ("\n  FAILL!!  INPUT: %d | ESP: %d  | RES: %d", c, esp, res);

	return (0);
}
int main ()
{
	testing ('+');
	testing ('H');
	testing (' ');
	return (0);
}
*/
