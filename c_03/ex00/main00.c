/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 21:30:46 by rsoares-          #+#    #+#             */
/*   Updated: 2021/04/15 17:21:32 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char	*s1 = "Roberto Soares Neves";
	char	*s2 = "Roberto";
	char	*s3 = "Roberto";

	printf("s1 = 'Roberto Soares Neves', s2 = 'Roberto': %d\n", ft_strcmp(s1, s2));
	printf("s1 = Roberto', s2 = 'Roberto Soares Neves': %d\n", ft_strcmp(s2, s1));
	printf("s1 = 'Roberto', s2 = 'Roberto': %d\n", ft_strcmp(s2, s3));

	return (0);
}