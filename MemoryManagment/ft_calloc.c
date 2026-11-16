/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaura <malaura@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 07:24:38 by malaura           #+#    #+#             */
/*   Updated: 2026/11/16 09:06:29 by malaura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//calloc : continues allocation purpose is to allocate a block of memory for an arry elementes and
//         analize every single byte in that memory to zero.

/*#include "libft.h"
//n (the number of elements) and size (the byte size of each element)


void	*ft_calloc(size_t n, size_t size)
//n (the number of elements) and size (the byte size of each element)
{
	void	*ptr;
	size_t	total;
        
	//prevent a critical security vulnerability, casting -1 to an usigned size_t gives the maXimun 
	//possible value SIZE MAX
	
	if (size != 0 && n > (size_t)-1 / size)
		return (NULL);
	
	//Alocattion Memory: calculate the exact number of bytes needed and request that block 
	//of memory from the systm heap
	
	total = n * size;
	ptr = malloc(total);
	
	//Allocation Failure Check, checking if malloc susceeded, 
	//if the system is out of memory, malloc returns NULL, and fcalloc pass 
	//that null back to the caller
	
	if (!ptr)
		return (NULL);
	if (total > 0)
	
	// wipes de allocad memory clean bzero sets every byte to 0
	// (as long the requestes size is grater than zero)
	
		ft_bzero(ptr, total);
	
	// hands the clean, ready to use memory address back to the program
	
	return (ptr);
}*/

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;
	size_t	total;

	if (size != 0 && n > (size_t)-1 / size)
		return (NULL);
	total = n * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}

/*Nota: Se ha quitado el if (total > 0) porque ft_bzero ya no hace nada si el tamaño es 0, haciendo el código más corto y rápido)*/
