/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaura <malaura@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 10:41:08 by malaura           #+#    #+#             */
/*   Updated: 2026/11/18 10:46:57 by malaura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// AYUDANTE 1: El contador de palabras
// Recorre el libro 's' saltando los espacios 'c' para saber cuántas
// hojas nuevas necesitaremos pedir en la papelería.
static size_t	count_words(char const *s, char c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words);
}

// AYUDANTE 2: El equipo de limpieza
// Si algo sale mal a mitad del trabajo, rompe las hojas que ya
// habíamos recortado y tira la carpeta para no dejar basura en memoria.
static void	free_all(char **arr, size_t j)
{
	while (j > 0)
	{
		j--;
		free(arr[j]);
	}
	free(arr);
}

// AYUDANTE 3: El recortador (aquí usamos tu ft_substr)
// Va palabra por palabra, mide dónde empieza y cuánto mide,
// y llama a ft_substr para recortarla y guardarla en la carpeta.
static int	fill_words(char **arr, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			arr[j] = ft_substr(s, start, i - start);
			if (!arr[j])
				return (free_all(arr, j), 0);
			j++;
		}
	}
	arr[j] = NULL;
	return (1);
}

// FUNCIÓN PRINCIPAL: El director del taller
char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	words;

	// 1. El guardia revisa si el libro existe.
	if (!s)
		return (NULL);
	// 2. Contamos cuántas palabras hay en total.
	words = count_words(s, c);
	// 3. Pedimos una carpeta (malloc) con espacio para cada palabra + 1 sello NULL final.
	arr = malloc(sizeof(char *) * (words + 1));
	if (!arr)
		return (NULL);
	// 4. Mandamos al recortador a llenar la carpeta usando ft_substr.
	if (!fill_words(arr, s, c))
		return (NULL);
	// 5. Entregamos la carpeta completa con todas las palabras recortadas.
	return (arr);
}
