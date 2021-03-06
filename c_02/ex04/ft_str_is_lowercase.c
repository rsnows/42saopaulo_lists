/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:54:34 by rsoares-          #+#    #+#             */
/*   Updated: 2021/04/14 00:43:23 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int c;
	int d;

	c = 0;
	while (str[c] != '\0')
	{
		d = str[c];
		if (d < 97 || d > 122)
		{
			return (0);
		}
		c++;
	}
	return (1);
}
