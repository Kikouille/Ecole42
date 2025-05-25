/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@42.fr>                     +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:40:00 by vincent           #+#    #+#             */
/*   Updated: 2025/05/09 17:50:00 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// a ajouter que si on veux tester si cela fonctionne
#include <stdio.h>

// code a rendre seulement 
void	ft_swap(int *a, int *b)
{
	int	temp;		//Variable temporaire pour stocker la première valeur

	temp = *a;		//Récupère la valeur pointée par a (ex : x)
	*a = *b;		//Met dans a la valeur de b
	*b = temp;		//Met dans b l'ancienne valeur de a
}

// a ajouter que si on veux tester si cela fonctionne
int	main(void)
{
	int	x;
	int	y;

	x = 3;
	y = 7;
	printf("Avant Swap : x = %d, y = %d\n", x, y);		//permet dafficher la valeur avant le swap
	ft_swap(&x, &y);		//permet de swap 
	printf("Apres Swap : x = %d, y = %d\n", x, y);		// permet dafficher la valeur apres le swap
	return (0);
}

//*a = la boîte A

//*b = la boîte B

//temp = une boîte vide qu’on utilise juste pour transvaser