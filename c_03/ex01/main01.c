#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char	*s1 = "Roberto";
	char	*s2 = "Roberto Soares Neves";

	printf("s1 = 'Roberto', s2 = 'Roberto Soares Neves', n = 7: %d\n", ft_strncmp(s1, s2, 7));
	printf("s1 = Roberto Soares Neves', s2 = 'Roberto', n = 8: %d\n", ft_strncmp(s2, s1, 8));
	printf("s1 = 'Roberto', s2 = 'Roberto Soares Neves'', n = 8: %d\n", ft_strncmp(s1, s2, 8));
	return (0);
}