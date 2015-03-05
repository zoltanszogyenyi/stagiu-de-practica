/*

Student:              Szogyenyi Zoltan
Anul:                 I
Materie:              Stagiu de Practica
Limbaj de programare: C
Data:                 Martie 3 2015 - Marti

9.) Exercitiul:

Sa se scrie un program care elimina dintr-un sir de numere reale elementele
care se gasesc de mai multe ori in sir (se retin elementele unicat).
Daca nu mai ramane nici un element se va afisa un mesaj, altfel se afiseaza sirul obtinut.

*/

#include <stdio.h>

int main() {
	int a[50];
	int n;

	printf("Dati un numar n natural:\n");
	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}

	// algoritmul de unicare
	for (int i = 0; i < n; ++i)
	{
		printf("\n");
		for (int j = i+1; j < n; ++j)
		{
			if (a[i] == a[j])
			{
				for (int h = j; h < n; ++h)
				{
					a[h] = a[h+1];
				}
				--n;
			}
		}
	}

	printf("Vectorul unicat:\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}

	printf("\nExit...\n");

	return 0;
}
