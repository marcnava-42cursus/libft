/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 01:48:42 by marcnava          #+#    #+#             */
/*   Updated: 2025/07/30 16:23:32 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Auxiliares (máx. 4): separar para cumplir Norminette */
static void	ft_set_int(void *ptr, const char *val)
{
	*(int *)ptr = ft_atoi(val);
}

static void	ft_set_long(void *ptr, const char *val)
{
	*(long *)ptr = ft_atol(val);
}

static void	ft_set_char(void *ptr, const char *val)
{
	*(char *)ptr = val[0];
}

static void	ft_apply_spec(void *ptr, const char *input)
{
	char		type;
	const char	*val;

	type = input[0];
	val = input + 1;
	if (type == 'i')
		ft_set_int(ptr, val);
	else if (type == 'l')
		ft_set_long(ptr, val);
	else if (type == 'c')
		ft_set_char(ptr, val);
	else if (type == 's')
		*(char **)ptr = ft_strdup(val);
}

/**
 * @brief Inicializa múltiples variables de distintos tipos mediante argumentos
 *        variables.
 *
 * Esta función permite asignar valores a variables pasadas por puntero, usando
 * una cadena
 * con el tipo y valor codificados. Se aceptan los siguientes tipos:
 * - 'i' seguido de valor entero (int)
 * - 'l' seguido de valor long (long)
 * - 'c' seguido de un carácter (char)
 * - 's' seguido de una cadena (char*) → se copia con strdup (requiere free
 * posterior)
 *
 * Cada par de argumentos consiste en:
 *  1. Un puntero a la variable a inicializar (void*)
 *  2. Una cadena que comienza con el carácter del tipo seguido del valor a
 *  asignar
 *
 * Ejemplo de uso:
 * @code
 *     int edad;
 *     char letra;
 *     char *nombre;
 *     long tiempo;
 *
 *     ft_ftinit(4,
 *         &edad,  "i42",
 *         &letra, "cZ",
 *         &nombre,"sGalactico",
 *         &tiempo,"l9876543210");
 * @endcode
 *
 * @param count Número de pares (puntero, tipo+valor) a procesar
 * @param ... Lista de argumentos: puntero a variable, seguido de cadena
 *        tipo+valor
 *
 * @note Para tipo 's', se reserva memoria con strdup: el usuario debe liberar
 *       con free().
 * @note No hay validación de errores si el tipo no es reconocido.
 */
void	ft_ftinit(int count, ...)
{
	va_list	args;
	int		i;
	void	*ptr;
	char	*input;

	va_start(args, count);
	i = 0;
	while (i++ < count)
	{
		ptr = va_arg(args, void *);
		input = va_arg(args, char *);
		ft_apply_spec(ptr, input);
	}
	va_end(args);
}
