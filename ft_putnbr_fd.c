/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamhal <lamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:10:18 by lamhal            #+#    #+#             */
/*   Updated: 2023/11/15 17:41:04 by lamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	char	dgt;

	if (fd < 0)
		return ;
	nbr = n;
	if (n < 0)
	{
		nbr *= -1;
		write(fd, "-", 1);
	}
	while (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
		nbr %= 10;
	}
	dgt = nbr + 48;
	write(fd, &dgt, 1);
}
