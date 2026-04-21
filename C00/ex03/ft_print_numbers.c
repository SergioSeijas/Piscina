/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseijas <sergioseijas.ferreiro@gmail.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:16:16 by sseijas           #+#    #+#             */
/*   Updated: 2026/04/21 11:35:56 by sseijas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	n_i;

	n_i = '0';
	while (n_i <= '9')
	{
		ft_putchar(n_i);
		n_i++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
