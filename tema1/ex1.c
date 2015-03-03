/*

! am facut doar a.)

Student:              Szogyenyi Zoltan
Anul:                 I
Materie:              Stagiu de Practica
Limbaj de programare: C
Data:                 Martie 3 2015 - Marti

1.) Exercitiul:

Pentru un tablou cu cel mult 50 de elemente de tip real, citit de la tastatura, sa se construiasca un nou tablou
in urmatorul mod: intre doua elemente consecutive se insereaza maximul lor in valoare absoluta, daca diferenta lor
este strict mai mica decat 10. 

Ex:pentru n = 5, si (-20,-5,15,-13,14) =>(-20,20,-5,15,15,-13,14,14).
Obs. Se rezolva in doua moduri:

a) cu un tabou ajutator 
b) fara un tablou ajutator.

*/

#include <stdio.h>
// pentru a putea folosi functia abs()
#include <stdlib.h>

// functie pentru diferenta dintre doua numere
int diff(int, int);

//functie pentru maximul dintre doua numere
int max(int, int);

int main()
{
   int tablou[50];
   int rezultat[50];

   // m este numarul de elemente pentru tabloul ajutator
   int n, m = 0;

   // tabloul ajutator
   int tablou2[50];

   printf("Introduceti un n: ");
   scanf("%d", &n);

   // citirea elementelor in tablou
   for(int i = 0; i < n; i++) {
   	printf("tablou[%d]= ", i);
   	scanf("%d", &tablou[i]);
   }

   // n-1 pentru ca ne uitam la un element in avans i + 1
   for(int i; i < n-1; i++) {

   	// conditia din exercitiu
   	if(diff(tablou[i], tablou[i+1]) < 10) {
   		// se aloca intr-un tablou ajutator maximul dintre cele doua numere
   		tablou2[m] = max(tablou[i], tablou[i+1]);
		m++;
   	}
   }

   // k este index pentru tabloul ajutator
   int k = 0;
   for(int i = 0; i < n+m; i++) {
   	rezultat[i+k] = tablou[i];
   	if(abs(tablou[i]) == tablou2[k]) {
   		rezultat[i+k+1] = tablou2[k];
   		k++;
   	}
   }

   // afisare rezultat
   printf("Rezultatul: ");
   for(int i = 0; i < n+m; i++) {
   	printf("%d ", rezultat[i]);
   }

   printf("\n");

   return 0;
}

// returneaza maximul dintre doua numere
int max(int a, int b) {
	if(a > b) {
		return abs(a);
	} else if (b > a) {
		return abs(b);
	}

	return abs(a);
}

// returneaza diferenta dintre doua numere
int diff(int a, int b) {
	int diff;
	a = abs(a);
	b = abs(b);

	if(a > b) {
		diff = a - b;
	} else if(b > a) {
		diff = b - a;
	} else {
		diff = 0;
	}

	return diff;
}