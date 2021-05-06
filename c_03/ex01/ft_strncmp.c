/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 11:26:47 by rsoares-          #+#    #+#             */
/*   Updated: 2021/04/15 18:35:55 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int c;

	c = 0;
	while ((s1[c] || s2[c]) && (c < n))
	{
		if (s1[c] < s2[c])
		{
			return (-1);
		}
		else if (s1[c] > s2[c])
		{
			return (1);
		}
		c++;
	}
	return (0);
}
