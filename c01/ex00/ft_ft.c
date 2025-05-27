/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                           :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@42.fr>                     +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 16:17:00 by vincent           #+#    #+#             */
/*   Updated: 2025/05/25 16:40:00 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// a mettre que pour verifier si cela fonctionne
#include <stdio.h>

//fonction ok ! 
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

// a mettre que pour verifier si cela fonctionne
int	main(void)
{
	int	x;  //Déclare une variable entière x. qui affichera par exemple 42

	x = 0; // on attribut a x une valeur de 0
	ft_ft(&x);
	printf("valeur : %d\n", x);
	return (0);
}
