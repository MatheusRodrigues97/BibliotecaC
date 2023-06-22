#include<unistd.h>

void	f_print_alphabet(void)
{
	char	vogal;

	vogal = 'a';
	while(vogal <= 'z')
	{
		write(1, &vogal,1);
		vogal++;
	}
	write(1, "\n" ,1);
}

int	main(void)
{
	f_print_alphabet();
}
