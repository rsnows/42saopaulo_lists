#include <stdio.h>

void    ft_putstr_non_printable(char *str);

int main(void){

    char str[] = "Oi\nvoce esta bem?";

    ft_putstr_non_printable(str);


    printf("\n\n===Created function:===\n");
    return (0);
}