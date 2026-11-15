/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaura <malaura@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 19:08:23 by malaura           #+#    #+#             */
/*   Updated: 2026/11/13 11:31:35 by malaura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This fucntion check wheather character is alphaumeric charactr o not, and return a int value.*/

int ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z' )
		||( c >= 'A' && c <= 'Z') 
		||( c >= '0' && c <= '9'))
		return(1);
	else
		return(0);
}
/* testing

#include <stdio.h>
#include <ctype.h>

int main(int c)
{
	int c = 'b';
	printf("c:%c | ESP:%d |RES:%d ", c, isalnum(c), ft_isalumn(c));
	return(0);
}
*/
