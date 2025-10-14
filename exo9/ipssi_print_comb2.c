#include <unistd.h>

void	ipssi_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			write(1, &"0123456789"[a / 10], 1);
			write(1, &"0123456789"[a % 10], 1);
			write(1, " ", 1);
			write(1, &"0123456789"[b / 10], 1);
			write(1, &"0123456789"[b % 10], 1);
			if (a != 98 || b != 99)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
