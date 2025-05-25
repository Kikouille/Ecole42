/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@42.fr>                     +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 16:17:00 by vincent           #+#    #+#             */
/*   Updated: 2025/05/25 16:40:00 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// a mettre que pour verifier si cela fonctionne
#include <stdio.h>

// a mettre uniquement dans son code pour 42
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

// a mettre que pour verifier si cela fonctionne
int	main(void)
{
	int	a;       //Déclare une variable entière a. C’est la variable finale sur laquelle on veut agir (écrire la valeur 42)
	int	*ptrs[9];  //Déclare un tableau ptrs de 9 éléments, chacun est un pointeur vers un int.
	int	i;  //Une variable pour servir d’index dans la boucle.

	a = 0;   //On initialise a à 0 (pour voir clairement qu’il va changer après la fonction)
	ptrs[0] = &a;  //Le premier élément du tableau ptrs[0] pointe sur a
	i = 1;  //On initialise i pour commencer la boucle
	while (i < 9)   //À chaque tour de boucle, on fait
	{
		ptrs[i] = &ptrs[i - 1];
		i++;
	}
	ft_ultimate_ft(ptrs[8]);  //On appelle la fonction en lui passant ptrs[8], c’est un pointeur sur pointeur sur pointeur ... (9 fois) qui mène finalement à a.
	printf("Valeur de a : %d\n", a);  //Affiche la valeur de a après que la fonction l’ait modifiée.
	return (0);  //Fin normale du programme
}
