#include <stdio.h>
int main () {

int num1,num2;
int media; //variabili iniziali

printf ("Inserisci il primo numero: \n"); //comando stampa
scanf ("%d", &num1); //input immesso dall'utente

printf ("Inserisci il primo numero: \n");
scanf ("%d", &num2);

media = (int) (num1 + num2)/2;

printf ("La media aritmetica tra i due numeri è:\n %.d" , media );

return 0;
}