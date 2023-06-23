#include<unistd.h>

void	f_print_numbers(void)
{
	char	number_init;

	number_init = '0';
	while(number_init <= '9')
	{
		write(1, &number_init, 1);
		number_init++;
	}
	write(1, "\n", 1);
}

int	main (void)
{
	f_print_numbers();
	return (0);
}

