#include<unistd.h>

void	f_print(int pri);

void	f_print_comb2 (void)
{
	int	sec1;
	int	sec2;
	
	sec1 = 0;
	while(sec1 < 99)
	{
		sec2 = sec1 + 1;
		while(sec2 < 100) 
		{
			f_print(sec1);
			f_print(sec2);
			write(1,",",1);
			sec2++;
		}
		sec1++;
	}
}

void	f_print(int pri)
{
	char	c;
	char	c1;

	c = '0' + (pri/10);
	c1 ='0' + (pri%10);
	write(1, &c, 1);
	write(1, &c1, 1);
	write(1, " ", 1);
}



int	main(void)
{
	f_print_comb2();
}
