/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@42.fr>                     +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:30:00 by vincent           #+#    #+#             */
/*   Updated: 2025/05/09 17:03:00 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(int *tab, int n)
{
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = tab[i] + '0';
		write(1, &c, 1);
		i++;
	}
	if (tab[0] != 10 - n)
		write(1, ", ", 2);
}

void	ft_generate(int *tab, int index, int n)
{
	int	i;

	if (index == n)
	{
		ft_print_comb(tab, n);
		return ;
	}
	if (index == 0)
		i = 0;
	else
		i = tab[index - 1] + 1;
	while (i <= 9)
	{
		tab[index] = i;
		ft_generate(tab, index + 1, n);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int		tab[10];

	if (n > 0 && n < 10)
		ft_generate(tab, 0, n);
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
