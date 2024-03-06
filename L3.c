#include <stdio.h>
int main () {

int num1;
int num2;
int risultato; //variabili iniziali

printf("Ciao Prof Paolo!!!\n");

printf ("Inserisci il primo numero: \n");
scanf ("%d", &num1);

printf ("Inserisci il secondo numero: \n");
scanf ("%d", &num2);

risultato = num1*num2;

printf ("Il prodotto tra i due numeri è: %2d\n", risultato);

return 0;
}