/*

Student:              Szogyenyi Zoltan
Anul:                 I
Materie:              Stagiu de Practica
Limbaj de programare: C
Data:                 Martie 5 2015 - Marti

5.) Exercitiul:

Simetrii intr-o matrice. Fiind data o matrice patratica A(n,n), 
sa se imparta matricea dupa cele doua diagonale in patru regiuni.

Se considera ca elementele de pe diagonal nu aprtin nici unei regiuni.

a. Sa se calculeze cel mai mare element din regiunea 1,
cel mai mic element din regiunea 2, suma elementelor din 
regiunea 3 si produsul elementelor din regiunea 4;

b. Se cere matricea obtinuta prin interschimbarea regiunilor 
1 si 3, facand simetria fata de axa de simetrie orizontala a matricei.

c. Se cere matricea obtinuta prin interschimbarea regiunilor 2 si 4,
facand simetria fata de axa de simetrie verticala a matricei;

d. Se cere matricea obtinuta prin interschimbarea regiunilor 1 si 3,
respectiv 2 si 4, facand simetria fata de centrul de simetrie al matricei.

*/

#include <stdio.h>

void swap(int*, int*);

int main() {
	int a[50][50];
	// regiunile
	int r1[50], r2[50], r3[50], r4[50];
	int n = 4;
	
	printf("Dati un numar n natural ");
	scanf("%d", &n);

	// citirea matricei
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	

	printf("Citirea matricei a fost realizata! \n");

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%d ", a[i][j]);
		}

		printf("\n");
	}

	// regiunea 1
	int k1 = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(i + j >= n && i > j) {
				r1[k1] = a[i][j];
				++k1;
			}
		}
	}

	// regiunea 2
	int k2 = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(i + j < n-1 && i > j) {
				r2[k2] = a[i][j];
				++k2;
			}
		}
	}

	// regiunea 3
	int k3 = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(i + j < n-1 && i < j) {
				r3[k3] = a[i][j];
				++k3;
			}
		}
	}

	// regiunea 4
	int k4 = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(i + j >= n && i < j) {
				r4[k4] = a[i][j];
				++k4;
			}
		}
	}

	// cel mai mare element din regiunea 1
	int max = r1[0];
	for (int i = 1; i < k1; ++i)
	{
		if (r1[i] > max)
		{
			max = r1[i];
		}
	}
	printf("Maximul din regiunea 1 este %d\n", max);

	// cel mai mic element din regiunea 2
	int min = r2[0];
	for (int i = 0; i < k2; ++i)
	{
		if (r2[i] < min)
		{
			min = r2[i];
		}
	}
	printf("Minimul din regiunea 2 este %d\n", min);

	// suma elementelor din regiunea 3 este
	int suma = 0;
	for (int i = 0; i < k3; ++i)
	{
		suma += r3[i];
	}
	printf("Suma elementelor din regiunea 3 este %d\n", suma);

	// produsul elementelor din regiunea 4 este
	int produs = 1;
	for (int i = 0; i < k4; ++i)
	{
		produs *= r4[i];
	}
	printf("Produsul elementelor din regiunea 4 este %d\n", produs);

	// subproblema 2, interschimbarea intre regiunea 1 si regiunea 3 fata de axa simetrica horizontala

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			// regiunea 1
			if (i + j >= n && i > j)
			{
				swap(&a[i][j], &a[n-i-1][j]);
			}
		}
	}

	printf("Interschimbare intre regiunea 1 si regiunea 3\n");
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%d ", a[i][j]);
		}

		printf("\n");
	}

	// subproblema 3, interschimbarea intre regiunea 2 si regiunea 4 fata de axa simetrica verticala

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			// regiunea 2
			if (i + j < n-1 && i > j)
			{
				swap(&a[i][j], &a[i][n-j-1]);
			}
		}
	}

	printf("Interschimbare intre regiunea 1 si regiunea 3\n");
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%d ", a[i][j]);
		}

		printf("\n");
	}

	printf("Exit...\n");
	return 0;
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}





