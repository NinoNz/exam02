
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int	main(void)
{
	char str1[] = "Nino";
	char str2[] = "Brown";

	printf("%s\t", str1);
	printf("%s\n", str2);

	printf("----avant----\n");

	ft_strcpy(str1, str2);
	printf("%s\n", str1);
}