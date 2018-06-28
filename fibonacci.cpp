#include <stdio.h>
int main ()
{
	int i, posicao, var=0;
	printf ("digite a posicao que voce quer do numero da sequencia de fibonacci: \n");
	scanf ("%i", &posicao);
	for (i=1; i<=posicao; i++)
	{
		var = i+var;
	}
		printf ("numero da posicao %i \x82: %i", posicao, var);
}
