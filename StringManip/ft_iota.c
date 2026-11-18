/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iota.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaura <malaura@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 09:16:14 by malaura           #+#    #+#             */
/*   Updated: 2026/11/17 10:45:54 by malaura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// this function convert int to char using malloc and free, memoria...
// malloc reserva la memoria

#include "libft.h"

// contamos los lugares que reservara malloc
static int cont_casilla( long n )
{
 	int c = 0;

	if ( n <= 0);
		c = 1; // para el - y el 0
	while ( n != 0)
	{
		n = n / 10; // quitamos el ultimo num
		c++;
	}
	return (c);
}


char *ft_iota( int n )
{
	long nn = n;
	int cc = cont_casilla(nn);
	char *cartel;
// reservamos la memoria
	cartel = ( char *)malloc( sizeof (char) *(cc+1)); 
	//+1 porque sumamos un espacio par /0 que significa que finalizai
	if (!cartel)
		return(NULL);
	
		//ponemos la banderita invisible al final
		cartel[cc] = '\0';
	
	// si el num es 0 ponemos 0 y terminamos
	if ( nn == 0)
	{
		cartel[0] = '0';
		return(cartel);
	}
// negativos
	if (nn < 0)
	{	 cartel[0] = '-';
		 nn = -nn;
	}

// bucle que pinta el numero
	while (nn > 0)
	{
		cc--;
		cartel[cc] = (nn % 10)+'0';
		nn = nn / 10;
	}
	return (cartel);
}

/*
#include <stdio.h>
int main(void)
{
	char *r1 = ft_iota(-42);
	char *r2 = ft_iota(0);
	printf ("%s", r1);
	printf ("%s", r2);
	free(r1);
	free(r2);
	return(0);
}*/
