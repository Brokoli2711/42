/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 20:06:05 by elfo              #+#    #+#             */
/*   Updated: 2024/12/19 19:44:06 by elfo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	num;
	int	c;

	num = max - min;
	if ((num) <= 0)
		return (ptr);
	ptr = (int *) malloc(num * 4);
	c = 0;
	while (min < max)
	{
		ptr[c] = min;
		c++;
		min++;
	}
	return (ptr);
}

int	main(int argc, char *argv[])
{
	int *ptr;

	ptr = ft_range(atoi(argv[1]), atoi(argv[2]));
	printf("%d %d %d %d", ptr[0], ptr[1], ptr[2], ptr[3]);
	return (0);
}
