/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main09.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 20:01:18 by rsoares-          #+#    #+#             */
/*   Updated: 2021/04/14 15:48:06 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str);

int		main(void)
{
	char *a;
	char str1[] = "oi, tudo bem? 42palavras quarenta-e-duas; CINQUENTA+e+um";

	a = ft_strcapitalize(str1);
	printf("Original: oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um\n");
	printf("Após a função: %s\n", a);

}
