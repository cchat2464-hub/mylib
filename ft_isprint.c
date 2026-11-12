/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaura <malaura@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 19:43:56 by malaura           #+#    #+#             */
/*   Updated: 2026/11/12 19:51:41 by malaura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* function that consider ASCII 32 to 126
return Values (return (1) / return (0)): It returns 
1 (true) if the character can be displayed visually on a screen, 
and 0 (false) if it is a non-printable control character (like null 0, tab 9, or newline 10). 
Value 32 is the space character (' '), and 126 is the tilde ('~')*/

int ft_isprint(int c)
{
	if (c >= 32 && c <=1260)
		return(1);
	else
		return(0);
}
