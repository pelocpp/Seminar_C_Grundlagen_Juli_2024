#include <stdio.h>   // printf

#include "MeineUnterprogramme.h"

void GutenMorgen();   // Syntax: Unterprogramm


int summe(int ersterWert, int zweiterWert)
{
	int ergebnis;

	ergebnis = ersterWert + zweiterWert;

	printf("Summe: %d\n", ergebnis);

	return ergebnis;
}

int main_unterprogramme ()
{
	int result;

	result = summe(100, 200);

	printf("%d\n", result);   // 3

	return 1;
}


void main_guten_morgen()
{
	GutenMorgenVerbessert( 5 );

	GutenMorgenVerbessert( 3 );

	printf("Wie oft wollen wir Guten Morgen hoeren? ");
	int anzahl;
	scanf_s("%d", &anzahl);

	GutenMorgenVerbessert( anzahl );

	printf("Ende\n");
}

void GutenMorgen ()
{
	// anweisungen
	printf("Guten Morgen\n");
	printf("Guten Morgen\n");
	printf("Guten Morgen\n");

	// return;
}


void GutenMorgenVerbessert ( int wieOft )
{
	// anweisungen
	for (int i = 0; i < wieOft; i++)
	{
		printf("Guten Morgen\n");
	}
	printf("\n");
}

