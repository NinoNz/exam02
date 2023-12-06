
// Assignment name  : ft_swap
// Expected files   : ft_swap.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Write a function that swaps the contents of two integers the adresses of which
// are passed as parameters.

// Your function must be declared as follows:

// void	ft_swap(int *a, int *b);


void	ft_swap(int *a, int *b)
{	
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

// #include <stdio.h>

// int main(void)
// {
// 	int		a;
// 	int		b;
// 	int		*ptra;
// 	int		*ptrb;

// 	a = 1;
// 	b = 2;

// 	ptra = &a;
// 	ptrb = &b;

// 	ft_swap(ptra, ptrb);

// 	printf("a : %d, b : %d\n", a, b);
// }
