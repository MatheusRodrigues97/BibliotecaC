#include<unistd.h>

void	f_putchar(char c)
{
	write(1, &c, 1);
	write(1, "\n", 1);
	
}

int	main(void)
{
	f_putchar('M');
	return (0);
}
