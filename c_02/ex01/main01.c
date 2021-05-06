/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:51:19 by rsoares-          #+#    #+#             */
/*   Updated: 2021/04/13 17:14:51 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char *dest;
	char *src;
	unsigned int n;

	src = calloc(7, sizeof(char));
	src = "Roberto";
	dest = calloc(7, sizeof(char));
	n = 3;

	ft_strncpy(dest, src, n);
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);	
	
	return (0);
}