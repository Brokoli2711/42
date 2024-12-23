/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:19:13 by elfo              #+#    #+#             */
/*   Updated: 2024/12/20 18:54:15 by elfo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_a(char *str)
{
	while (*str != '\0')
	{
		if(*str == 'a')
			return (1);
		str++;
	}
	return (0);
}

int	ft_count_if(char **tab, int(*f)(char*))
{
	int	c;
	int	len;

	c = 0;
	len = 0;
	while (tab[len])
	{
		if(f(tab[len]) == 1)
			c++;
		len++;
	}
	return (c);
}

int	main(int argc, char *argv[])
{
	if(argc > 1)
		printf("%d",ft_count_if(argv, &check_a));
	return (0);
}
