/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@42.fr>                     +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:20:00 by vincent           #+#    #+#             */
/*   Updated: 2025/05/09 16:27:00 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>  //a mettre uniquement pour verifier pas a rendre a 42

void	ft_div_mod(int a, int b, int *div, int *mod)		// a rendre uniquement a 42
{
	*div = a / b;			// LA VALEUR A STOCKER DANS *DIV
	*mod = a % b;			//La VALEUR A STOCKER DANS *MOD
}

int	main(void)		// a mettre uniquement pour verifier pas a rendre a 42
{
	int	a;
	int	b;
	int	d;			//D est une boite
	int	m;			// M est une boite

	a = 15;
	b = 2;
	ft_div_mod(a, b, &d, &m);			//passes leurs adresses a la fonction (&d, &m EST L'adresse de la boite)
	printf("Division: %d\n", d);		// PERMET DE FAIRE LA DIVISION A / B 
	printf("Modulo: %d\n", m);			// PERMET DE FAIRE LA MODULATION DE A % B 
	return (0);
}
