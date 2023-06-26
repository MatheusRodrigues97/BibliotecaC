#include<unistd.h>

char	f_is_negative (int n)
{
	if (n < 0)
		return('n');
	else
		return('p');
}

int	main (void) 
{
	char	resul;
	
	resul = f_is_negative(-25);
	write(1, &resul, 1);
	write(1, "\n", 1);
	return(0);
}
