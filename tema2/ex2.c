/*

Student:              Szogyenyi Zoltan
Anul:                 I
Materie:              Stagiu de Practica
Limbaj de programare: C
Data:                 Martie 21 2015 - Sambata

2. Se citesc de la tastatură elementele unei matrici de caractere (nr. linii=nr.
coloane), A(NxN), N<=10.

a) Să se afişeze matricea A;

b) Să se formeze şi să se afişeze cuvântul format din caracterele pe pe
diagonala principală a matricii A;

c) Să se calculeze şi să se afişeze numărul de litere mari, litere mici şi cifre din
matrice;

d) Să se afişeze cuvântul format din caracterele de pe diagonala secundară;

e) Să se afişeze procentul literelor mari, al literelor mici şi al cifrelor de pe cele 2
diagonale;

f) Să se afişeze caracterele comune aflate pe liniile p şi q (p, q < N, p şi q citite
de la tastatură);

g) Să se afişeze in ordine alfabetică, crescătoare, literele mari aflate pe
coloanele impare

*/

#include <stdio.h>

// library for the isalpha() and isdigit() functions
#include <ctype.h>

void printMatrix(char matrix[10][10], int);

int main()
{
	char a[10][10];
	int n;

	// Se citesc de la tastatură elementele unei matrici de caractere (nr. linii=nr.coloane), A(NxN), N<=10
	printf("The size of the matrix: ");
	scanf("%d", &n);


	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("a[%d][%d]= ", i, j);
			scanf(" %c", &a[i][j]);
		}
	}

	// a) Să se afişeze matricea A
	printMatrix(a, n);

	// b) Să se formeze şi să se afişeze cuvântul format din caracterele pe pediagonala principală a matricii A
	printf("The main diagonal's characters: ");
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (i == j)
			{
				printf("%c", a[i][j]);
			}
		}
	}

	// c) Să se calculeze şi să se afişeze numărul de litere mari, litere mici şi cifre din matrice
	int uppercase = 0, lowercase = 0, numbers = 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (isalpha(a[i][j]))
			{
				if (a[i][j] <= 'Z' && a[i][j] >= 'A')
				{
					uppercase++;
				} else if (a[i][j] <= 'z' && a[i][j] >= 'a')
				{
					lowercase++;
				}
			} else if (isdigit(a[i][j]))
			{
				numbers++;
			}
		}
	}

	printf("\nNumber of uppercase letters: %d\n", uppercase);
	printf("Number of lowercase letters: %d\n", lowercase);
	printf("Number of numbers          : %d\n", numbers);

	// d) Să se afişeze cuvântul format din caracterele de pe diagonala secundară;
	printf("The secondary diagonal's characters: ");
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (i == (n-j-1))
			{
				printf("%c", a[i][j]);
			}
		}
	}

	return 0;
}

void printMatrix(char matrix[10][10], int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%c ", matrix[i][j]);
		}
		printf("\n");
	}
}






