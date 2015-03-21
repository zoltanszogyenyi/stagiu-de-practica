/*

Student:              Szogyenyi Zoltan
Anul:                 I
Materie:              Stagiu de Practica
Limbaj de programare: C
Data:                 Martie 21 2015 - Sambata

1. Să se scrie un program C care realizează următoarele:

a. Şterge dintr-un şir de caractere un subşir specificat prin poziţie şi lungime.

b. Inserează într-un şir începând cu o poziţie dată un alt şir.

c. Citeşte două cuvinte şi înlocuieşte într-un text introdus de la tastatură toate
apariţiile primului cuvânt prin cel de-al doilea.

*/

#include <stdio.h>

void substring(char [], char[], int, int);
 
int main() 
{
   char string[1000], sub[1000];
   int position, length, c = 0;
 
   printf("Input a string\n");
   gets(string);
 
   printf("Enter the position and length of substring\n");
   scanf("%d%d", &position, &length);
 
   substring(string, sub, position, length);
 
   printf("Required substring is \"%s\"\n", sub);
 
   return 0;
}
 
void substring(char s[], char sub[], int p, int l) {
   int c = 0;
 
   while (c < l) {
      sub[c] = s[p+c-1];
      c++;
   }
   sub[c] = '\0';
}