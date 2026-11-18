/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaura <malaura@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 10:17:52 by malaura           #+#    #+#             */
/*   Updated: 2026/11/18 10:38:30 by malaura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *p;
	size_t i;
	size_t size;

	// 1guardi de la puerta S es un libro de cuentos y si el libro realmete existe cont o null si no
	
	if (!s)
		return (NULL);
	
	//2. contando pagias del lib
	size = ft_strlen(s);

	//3. el salto demasiado largo
	if (start >= size)
		return (ft_strdup(""));
	
	//4 calculando cuantas letras quedan hasta el final
	size -= start;

	//5. la mochila justa, si nos piden 100 letras len, ajustamos el valor si es menor
	if (len < size)
		size = len;
	 
	//6. pedimos hoja nueva del tamano exacto
	p = malloc(sizeof(char) * (size + 1));
	if (!p)
		return (NULL);

	//7. copista trabajando
	//i=0 empez desde 0 y vamos letra por letra desde el lugar exacto q empz start
	
	i = 0;
	while (i < size)
	{
		p[i] = s[i + start];
		i++;
	}
	
	///8. fin ponemos sello mag \0
	p[i] = '\0';

	//9. entregamos el cuento recortado
	
	return (p);

}
