/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 17:48:02 by elfo              #+#    #+#             */
/*   Updated: 2024/12/20 18:16:29 by elfo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	c;

	c = 0;
	while (c < length)
		f(tab[c++]);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)  // 가장 작은 int 값을 처리
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (nb < 0)
	{
		putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		putchar(nb + '0');
}


int	main(void)
{

	int	tab[] = {1,2,3,4,5};

	ft_foreach(tab, 5, &ft_putnbr);
	return (0);
}
