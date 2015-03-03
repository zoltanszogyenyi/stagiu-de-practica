/*

!! Produsul inca nu merge.

Student:              Szogyenyi Zoltan
Anul:                 I
Materie:              Stagiu de Practica
Limbaj de programare: C
Data:                 Martie 3 2015 - Marti

1.) Exercitiul:

Implementarea operatiilor cu matrici (suma, produsul) folosind meniu. Pentru citirea matricelor,
calculul sumei si calculul produsului se vor utiliza functii.

*/

#include <stdio.h>

void meniu();
void suma(int a[3][3], int b[3][3]);
void produs(int a[3][3], int b[3][3]);

int main() {
   int a[3][3], b[3][3];
   int e;

   for(int i = 0; i < 3; i++) {
   	for(int j = 0; j < 3; j++) {
   		printf("A[%d][%d]= ", i, j);
   		scanf("%d", &a[i][j]);
   	}
   }

   for(int i = 0; i < 3; i++) {
   	for(int j = 0; j < 3; j++) {
   		printf("B[%d][%d]= ", i, j);
   		scanf("%d", &b[i][j]);
   	}
   }

	do {
		meniu();
		scanf("%d", &e);
		switch(e) {
			case 1:
			printf("Suma celor doua matrici:\n");
				suma(a, b);
				break;
			case 2:
			printf("Produsul celor doua matrici:\n");
				produs();
				break;
			case 0:
				printf("Exit...\n");
				break;
		}

	} while(e != 0);

	return 0;
}

void meniu() {
	printf("MENIU\n");
	printf("Pentru suma tastati     1\n");
	printf("Pentru produs tastati   2\n");
	printf("... ");
}

void suma(int a[3][3], int b[3][3]) {
	for(int i = 0; i < 3; i++) {
   		for(int j = 0; j < 3; j++) {
   			printf("%d   ", a[i][j] + b[i][j]);
   		}
   		printf("\n");
   	}
}

void produs(int a[3][3], int b[3][3]) {
	for(int i = 0; i < 3; i++) {
	   	for(int j = 0; j < 3; j++) {
	   		printf("%d   ", a[i][j] * b[i][j] + );
	   	}
	   	printf("\n");
	  }
}

