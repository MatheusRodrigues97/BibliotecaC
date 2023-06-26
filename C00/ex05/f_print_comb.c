#include<unistd.h>
void	f_print(char c, char d, char u);
void	f_putchar(char x);

void	f_print_comb(void)
{
	char	centena;
	char	dezena;
	char	unidade;

	centena = '0';
	while(centena <= '7')
	{
		dezena = centena + 1;
		while(dezena <= '8')
		{
			unidade= dezena +1;
			while(unidade <= '9')
			{
				f_print(centena,dezena,unidade);
				unidade++;
			}
		dezena++;
		}
	centena++;
	}
	f_putchar('\n');

}

void	f_print(char c, char d, char u)
{
	f_putchar(c);
	f_putchar(d);
	f_putchar(u);
	if(!(c == '7' && d == '8'&& u == '9'))
		f_putchar(',');
}

void	f_putchar (char x)
{
	 write (1, &x, 1);
}

int	main(void)
{
	f_print_comb();
}

