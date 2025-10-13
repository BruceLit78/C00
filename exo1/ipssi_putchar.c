#include <unistd.h>

void	ipssi_putchar(char c)
{
	write(1, &c, 1);
}
