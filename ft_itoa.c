/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:15:38 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/29 21:25:43 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_checkvalues(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	return (NULL);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	if (n == -2147483648 || n == 0)
		return (ft_checkvalues(n));
	len = ft_getlen(n);
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		n = -n;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len > 0)
	{
		str[--len] = n % 10 + '0';
		n /= 10;
	}
	if (sign)
		str[0] = '-';
	return (str);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	int		n;
// 	char	*str;

// 	n = 123456;
// 	str = ft_itoa(n);
// 	printf("%s\n", str);
// 	free(str);
// 	n = -123456;
// 	str = ft_itoa(n);
// 	printf("%s\n", str);
// 	free(str);
// 	n = 0;
// 	str = ft_itoa(n);
// 	printf("%s\n", str);
// 	free(str);
// 	n = -2147483648;
// 	str = ft_itoa(n);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }