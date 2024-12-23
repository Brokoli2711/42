/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 19:40:29 by elfo              #+#    #+#             */
/*   Updated: 2024/12/18 20:01:17 by elfo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int number)
{
	int	factorial;
	int	counter;

	factorial = 1;
	counter = 0;
	while (counter++ < number)
	{
		factorial *= counter;
		lhh
	}
	return (factorial);
}

int	main(int argc, char *argv[])
{
	printf("%d",ft_iterative_factorial(atoi(argv[1])));
	return (0);
}
