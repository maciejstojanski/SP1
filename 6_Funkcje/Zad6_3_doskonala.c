#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int czy_doskonala(int n)
{
	int s = 1, p = sqrt(n);
	for(int i=2; i<=p; i++)
		if(n%i == 0)
			s+= i + n/i;
	if(n == p*p)
        s-=p;
	if(n == s)
        return 1;
	return 0;
}

int main()
{
	int n;
	printf("Podaj liczbę: ");
	scanf("%d",&n);
	if(czy_doskonala(n))
		printf("\nLiczba %d jest doskonala",n);
	else
		printf("\nLiczba %d nie jest doskonala",n);
	return 0;
}
