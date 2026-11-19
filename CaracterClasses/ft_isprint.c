/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaura <malaura@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 19:43:56 by malaura           #+#    #+#             */
/*   Updated: 2026/11/19 10:44:59 by malaura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* function that consider ASCII 32 to 126*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/* testing 
 
#include <stdio.h>
#include <ctype.h>

int testing(int c)
{  
	int res = ft_isprint(c) != 0;
	int esp = isprint(c) != 0;
	if (res == esp)
		printf ("\n OK! C:%d | RES: %d | ESP:  %d", c, res, esp);
	else
		printf ("\n FAIL!  C:%d | RES: %d | ESP:  %d", c, res, esp);   
	return (0);
}

int main()
{
	testing (5);
	testing (-5);
	testing (0);
	testing (1000);
	               
	return(0);
}
*/	
