#include<stdlio>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;

}
void	ft_ponteiro(int nmr);

int main (void)
{
	int	number;

	number = 63;
	ft_ponteiro(number);
	return( );
}

void	ft_ponteiro(int	nmr)
{
	int *treco;
	int **treco2;
	int ***treco3;
	int ****treco4;
	int *****treco5;
	int ******treco6;
	int *******treco7;
	int ********treco8;
	int *********treco9;


	*treco = **treco2;
	**treco2 = ***treco3;
	***treco3 = ****treco4;
	****treco4 = *****treco5;
	*****treco5 = *******treco6;
	******treco6 = *******treco7;
	********treco7 = *********treco8;
	*********treco8 = ***********treco9;

	ft_ultimate_ft (*********treco9);

}
