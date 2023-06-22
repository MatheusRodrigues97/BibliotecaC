#include<unistd.h>

void	f_print_reverse_alphabet(void)
{
	char	vogal;

	vogal = 'z';
	while(vogal >= 'a')
	{
		write(1, &vogal, 1 );
		write(1, ",", 1);
		vogal --;
	}
	write(1, "\n", 1);
}

int main (void)
{
	f_print_reverse_alphabet();
}
