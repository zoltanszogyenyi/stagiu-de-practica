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

void printMatrix(int matrix[10][10], int);

int main()
{
	int a[10][10];
	int n;

	// Se citesc de la tastatură elementele unei matrici de caractere (nr. linii=nr.coloane), A(NxN), N<=10.
	printf("The size of the matrix: ");
	scanf("%d", &n);


	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	// a) Să se afişeze matricea A;
	printMatrix(a, n);

	return 0;
}

void printMatrix(int matrix[10][10], int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}






