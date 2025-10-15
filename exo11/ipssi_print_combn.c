#include <unistd.h>

static void	print_combination(int *combination, int n, int *is_first)
{
	int		i;
	char	digit_char;

	if (*is_first == 1)
		*is_first = 0;
	else
		write(1, ", ", 2);
	i = 0;
	while (i < n)
	{
		digit_char = combination[i] + '0';
		write(1, &digit_char, 1);
		i++;
	}
}

static void	generate_combinations(int n, int *comb, int index, int start)
{
	static int	is_first = 1;
	int			i;

	if (index == n)
	{
		print_combination(comb, n, &is_first);
		return;
	}
	i = start;
	while (i <= 9)
	{
		comb[index] = i;
		generate_combinations(n, comb, index + 1, i + 1);
		i++;
	}
}

void	ipssi_print_combn(int n)
{
	int	combination[9];

	if (n > 0 && n < 10)
	{
		generate_combinations(n, combination, 0, 0);
	}
}
