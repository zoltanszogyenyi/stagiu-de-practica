/*

Student:              Szogyenyi Zoltan
Anul:                 I
Materie:              Stagiu de Practica
Limbaj de programare: C
Data:                 Martie 3 2015 - Marti

2.) Exercitiul:
Se citesc doua multimi de numere intregi cu cel mult 20 de elemente; 
sa se afiseze reuniunea, intersectia, diferenta si produsul cartezian al lor.

*/

#include <stdio.h>

int main() {
	int a[20], b[20];
	int n;

	printf("Introduceti un n: ");
   	scanf("%d", &n);

   	printf("Prima multime de numere\n");
   	for(int i = 0; i < n; i++) {
   		printf("a[%d]= ", i);
   		scanf("%d", &a[i]);
   	}

   	printf("A doua multime de numere\n");
   	for(int i = 0; i < n; i++) {
   		printf("b[%d]= ", i);
   		scanf("%d", &b[i]);
   	}

   	// 1. reuniunea
   	printf("Reuniunea: ");
   	for(int i = 0; i < n; i++) {
   		printf("%d ", a[i]);
   	}
   	for(int i = 0; i < n; i++) {
   		int diff = 1;
   		for(int j = 0; j < n; j++) {
   			if(b[i] == a[j]) {
   				diff = 0;
   			}
   		}
   		if(diff == 1) {
   			printf("%d ", b[i]);
   		}
   	}

   	// 2. intersectia
   	printf("\nIntersectia: ");
   	for(int i = 0; i < n; i++) {
   		for(int j = 0; j < n; j++) {
   			if(a[i] == b[j]) {
   				printf("%d ", a[i]);
   			}
   		}
   	}

   	// 3. diferenta
   	printf("\nDiferenta: ");
   	for(int i = 0; i < n; i++) {
   		int diff = 1;
   		for(int j = 0; j < n; j++) {
   			if(a[i] == b[j]) {
   				diff = 0;
   			}
   		}
   		if(diff == 1) {
   			printf("%d ", a[i]);
   		}
   	}

   	// 4. produsul cartezian
   	printf("\nProdusul cartezian: ");
   	for(int i = 0; i < n; i++) {
   		for(int j = 0; j < n; j++) {
   			printf("(%d %d) ", a[i], b[j]);
   		}
   	}

	return 0;
}
