

/*

Student:              Szogyenyi Zoltan
Anul:                 I
Materie:              Stagiu de Practica
Limbaj de programare: C
Data:                 Martie 3 2015 - Marti

7.) Exercitiul:

Se considera o matrice avand m linii si n coloane (0<m,n<10) ale carei elemente sunt cifre binare.
Scrieti un program care sa formeze un sir de numere scrise in sistemul de numeratie zecimal;
fiecare numar se obtine din cifrele binare de pe cate o coloana, mergand de sus in jos.

*/

#include <stdio.h>
#include <math.h>

int main() {
	int a[10][10];
	int n, m;

	printf("Numarul de linii\n");
	scanf("%d", &m);
	printf("Numarul de coloane\n");
	scanf("%d", &n);

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("a[%d][%d]= ", j, i);
			scanf("%d", &a[i][j]);
		}
	}

	int zecimal = 0;
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			zecimal += a[i][j] * pow(2, j); 
		}
		printf("%d ", zecimal);
		zecimal = 0;
	}

	printf("\nExit...\n");

	return 0;
}
