# 42 - Libft 

This Library has been writeen by Marianela Laura (malaura), as a first project in 42Paris.

## Description

The goal was to reacreate from scratch some functions of the Libc and add some new ones. These new functions are related to memory management, file descriptors, string manipulations, character classes and linked lists.


## Instructions

To compile the Libft activity, use the command make. 
It will create a libft.a file that can be included in the compilation of other C projects.

## Ressources

- Linux manual page: https://man7.org/linux/man-pages/
- ee web pages (data types, file descriptors, linked lists)
- AI to compare the concepts that are new for me and the real life, and for debugging my programs.


## List of the functions

### Character classes
- `ft_isalpha()` (checks if a char is a letter)
- `ft_isdigit()` (checks if a char is a digit)
- `ft_isalnum()` (checks if a char is a letter or a digit)
- `ft_isascii()` (checks if a char is part of ascii table)
- `ft_isprint()` (checks if a char is printable) 
- `ft_isupper()` (BONUS - checks if a letter is uppercase)
- `ft_islower()` (BONUS - checks if a letter is lowercase)
- `ft_isspace()` (BONUS - checks if a char is a space (or equivalent))
- `ft_isxdigit()` (BONUS - checks if a char is a hexadecimal digit)
- `ft_tolower()` (turn a uppercase letter to lowercase)
- `ft_toupper()` (turn a lowercase letter to uppercase)

### Memory management
- `ft_calloc()` (allocate an empty memory zone)
- `ft_bzero()` (clear a memory zone)
- `ft_memset()` (fill a memory zone with a value) 
- `ft_memcpy()` (copy a memory zone into another)
- `ft_memmove()` (move a memory zone into another, even if the zones are overlapping)
- `ft_memchr()` (search the 1st occurence a of value in a memory zone)
- `ft_memcmp()` (comapre two memory zones)

### Strings manipulations
- `ft_atoi()` (convert a string into a int)
- `ft_itoa()` (convert a int into a string)
- `ft_split()` (split all the words of a string in a new array)
- `ft_strchr()` (search the first occurence of a char is a string)
- `ft_strrchr()` (search the last occurence of a char in a string)
- `ft_strdup()` (duplicate a string)
- `ft_strjoin()` (join two strings in a new one)
- `ft_strlcpy()` (copy a string into another and return the supposed size)
- `ft_strlcat()` (concatenates two strings, return the supposed size)
- `ft_strlen()` (give the length of a string)
- `ft_strncmp()` (compare n characters of two string)
- `ft_strnstr()` (locate a substring in a string)
- `ft_strtrim()` (trim a string from a charset)
- `ft_substr()` (create a substring from a string)

### File descriptors
- `ft_putchar_fd()` (send a char to a file descriptor)
- `ft_pustr_fd()` (send a string to a file descriptor)
- `ft_putendl_fd()` (send a string with a new line at the end to a file descriptor)
- `ft_putnbr_fd()` (send a number to a file descriptor)

### Linked lists
- `ft_lstnew()` (create a new node with a value)
- `ft_lstadd_front()` (create a new node at the front of the list)
- `ft_lstsize()` (count the nodes of a list)
- `ft_lstlast()` (get the last node of a list)
- `ft_lstadd_back()` (add a node at the end of a list)
- `ft_lstdelone()` (delete a node of a list)
- `ft_lstclear()` (clear all the nodes of a list)
- `ft_lstiter()` (iterate through the list and apply a function)
- `ft_lstmap()` (apply a function to all the nodes of the list)

