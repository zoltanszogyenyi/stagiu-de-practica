/*

Student:              Szogyenyi Zoltan
Anul:                 I
Materie:              Stagiu de Practica
Limbaj de programare: C
Data:                 Martie 3 2015 - Marti

1.) Exercitiul:

Citeste un sir de numere intregi si il ordoneaza crescator
folosind sortarea prin metoda insertiei. Elementele se
citesc pe rand si se insereaza in vector astfel incat acesta 
sa ramana ordonat.
Ex: n=5 si se citesc numerele: 4 -3 3 1 15
=>
4
-3 4
-3 3 4
-3 3 4 15 
-3 1 3 4 15

*/

#include <stdio.h>

int main() {
	int a[50];
	int n;

	printf("Dati un element natural n\n");
	scanf("%d", &n);

	// algoritmul
	int temp, value;

	for (int h = 0; h < n; ++h)
	{
		printf("a[%d]= ", h);
		scanf("%d", &a[h]);

		// algoritmul are nevoie de cel putin 2 elemente
		if (h > 1)
		{
			// sortarea cu insertie
			for (int i = 1; i < n-1; ++i)
			{
				value = a[i];
				temp  = i;
				while (temp > 0 && a[temp-1] > value)
				{
					a[temp] = a[temp-1];
					--temp;
				}
				a[temp] = value;
			}
		}
		// afisarea vectorului
		for (int j = 0; j <= h; ++j)
		{
			printf("%d ", a[j]);
		}
		printf("\n");
	}

	printf("Exit...\n");

	return 0;
}
