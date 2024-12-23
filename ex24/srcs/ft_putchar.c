/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:50:00 by elfo              #+#    #+#             */
/*   Updated: 2024/12/20 17:23:42 by elfo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*int	main(int argc, char *argv[])
{
	char	*i;

	i = argv[1];
	if (argc == 2)
		ft_putchar(i[0]);
	return (0);
}*/
