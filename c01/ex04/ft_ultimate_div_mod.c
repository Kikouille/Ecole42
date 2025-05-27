/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@42.fr>                     +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:00:00 by vincent           #+#    #+#             */
/*   Updated: 2025/05/09 17:15:00 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>			//a mettre uniquement pour verifier pas a rendre a 42

void	ft_ultimate_div_mod(int *a, int *b)			// a rendre uniquement a 42
{
	int	temp_a;				//valeur pointee par a  (ceci est une boite pour stocker *a)
	int	temp_b;				//valeur pointee par a  (ceci est une boite pour stocker *b)

	temp_a = *a;			// copie la valeur pointee par a
	temp_b = *b;			// copie la valeur pointee par b
	*a = temp_a / temp_b;			
	*b = temp_a % temp_b;
}

int	main(void)			//a mettre uniquement pour verifier pas a rendre a 42
{
	int	a;					// declare une variable entiere a
	int	b;					// declare une variable entiere b

	a = 12;					// mettre une valeur a A
	b = 4;					// mettre une valeur a b
	ft_ultimate_div_mod(&a, &b);					//passes leurs adresses a la fonction (&a, &b EST L'adresse de la boite)
	printf("Division: %d\n", a);			// PERMET DE FAIRE LA DIVISION A / B 
	printf("modulo: %d\n", b);				// PERMET DE FAIRE LA MODULATION DE A % B 
	return (0);
}
