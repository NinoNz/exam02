
// Assignment name  : ft_strlen
// Expected files   : ft_strlen.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that returns the length of a string.

// Your function must be declared as follows:

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
    return i;
}

int main()
{
    char example[] = "Hello, World!";
    int length = ft_strlen(example);

    // Vous pouvez imprimer la longueur si nécessaire
    // printf("Length: %d\n", length);

    return 0;
}
