/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaura <malaura@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 20:37:57 by malaura           #+#    #+#             */
/*   Updated: 2026/11/19 21:02:28 by malaura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	// indice para movernos por la posiciones del texto
	size_t	j;
	// comezamos por la primera posicion 0
	j = 0;
	// avanzamos hasta el final del texto para saber cuanto mide
	while (s[j] != '\0')
		j++;
	//recorremos el texto hacia atras desde el final
	while (j > 0)
	{
		//si la letra esta n la posicion 'j' coincide con 'c'
		if ((unsigned char)s[j] == (unsigned char)c)
			//devolvemos la direccion de memoria (&)  quitando el const con (char *)
			return ((char *)&s[j]);
		//retrocedemos uan pos has iza
		j--;
	}
	//3. como el bucle anterio paro en j=1 comprbamos la primera letra (j=0)
	if ((unsigned char)s[j] == (unsigned char)c)
	//la función y devuelve la dirección de memoria donde está la letra que encontraste, pero quitándole la etiqueta de "solo lectura" (const).
		return ((char *)&s[j]);
	// si llegamos hasta aqui la letra no existe en el texto ... devolvemos NULL
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>


void	test_case(const char *s, int c)
{
	char	*real;
	char	*mine;

	real = strrchr(s, c);
	mine = ft_strrchr(s, c);
	if (real == mine)
		printf("OK!!   s=\"%s\", c='%c' (%d)\n", s, c, c);
	else		printf("FAIL!! s=\"%s\", c='%c' -> expected %p, got %p\n",
			s, c, (void *)real, (void *)mine);
}

int	main(void)
{
	test_case("banana", 'a');          // Last occurrence
	test_case("banana", 'b');          // First character
	test_case("banana", 'z');          // Not found (NULL)
	test_case("banana", '\0');         // Null terminator
	test_case("", 'a');                // Empty string, char not found
	test_case("", '\0');               // Empty string, searching '\0'
	test_case("hello", 'l' + 256);     // Overflow ASCII (> 255)
	return (0);
}
*/

