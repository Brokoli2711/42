/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 10:38:33 by elfo              #+#    #+#             */
/*   Updated: 2024/12/23 11:03:47 by elfo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_display_file(char **str)
{
	char	temp[1];
	int		f;
	int		ret;

	f = open(str[1], O_RDONLY);
	ret = 1;
	if(f == -1)
		return (0);
	while (ret > 0)
	{
		ret = read(f, temp, 1);
		if (ret == -1)
			return (0);
		if (ret > 0)
			ft_putchar(temp[0]);
	}
	ret = close(f);
	if (ret == -1)
		return (0);
	return (1);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc == 2)
	{
		if (ft_display_file(argv) == 0)
			return (0);
	}
	else
		ft_putstr("Too many arguments.\n");
	return (0);
}
