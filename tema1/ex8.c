/*

Student:              Szogyenyi Zoltan
Anul:                 I
Materie:              Stagiu de Practica
Limbaj de programare: C
Data:                 Martie 3 2015 - Marti

8.) Exercitiul:

Se considera un polinom cu coeficienti reali de 2 variabile x si y.
Sa se implementeze functii pentru adunarea, scaderea si inmultirea
polinoamelor de acest tip.

*/

#include <stdio.h>

int main() {
	// coeficientii polinoamelor
	int a, b, c, d;
	
	printf("Coeficientul a\n");
	scanf("%d", &a);
	printf("Coeficientul b\n");
	scanf("%d", &b);

	printf("%dx + %dy\n", a, b);

	printf("Coeficientul c\n");
	scanf("%d", &c);
	printf("Coeficientul d\n");
	scanf("%d", &d);

	printf("%dx + %dy\n", c, d);

	printf("Operatiunile de adaugare, scadere si inmultire:\n");

	// adunarea polinoamelor
	printf("Adunarea: %dx + %dy\n", a+c, b+d);

	// scaderea polinoamelor
	printf("Scaderea: %dx + %dy\n", a-c, b-d);

	// inmultirea polinoamelor
	printf("Inmultirea: %dx^2 + %dy^2\n", a*c, b*d);

	printf("Exit...\n");

	return 0;
}
