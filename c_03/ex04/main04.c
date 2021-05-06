#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char *str = "Roberto";
	char *to_find = "erto";
	char *a = ft_strstr(str, to_find);
	printf("The substring is: %s\n", a);

	to_find = "";
	a = ft_strstr(str, to_find);
	printf("The substring is: %s\n", a);

	to_find = "a";
	a = ft_strstr(str, to_find);
	printf("The substring is: %s\n", a);

}