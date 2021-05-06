/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:28:18 by rsoares-          #+#    #+#             */
/*   Updated: 2021/04/12 15:31:29 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void){
	int size;
	int *tab;
	int p[5] = {0,1,2,3,4};

	tab = &p[0];
	size = 5;
	for (int i = 0; i < size; i++)
	{
		printf("%d", p[i]);
	}
	printf("\n");
	ft_rev_int_tab(tab, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d", p[i]);
	}
	printf("\n");
}
