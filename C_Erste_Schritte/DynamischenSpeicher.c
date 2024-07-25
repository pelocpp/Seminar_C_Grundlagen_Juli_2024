#include <stdio.h>    // printf
#include <stdlib.h>   // malloc / free

void test_dynamic_memory()
{
	// möchte Speicher dynamisch / auf der Halde anlegen

	// Beispiel: 10 int-Variablen

	// int daten[100000];    // Stack

	size_t wieviel = sizeof(int);

	printf("sizeof: int               %zu\n", sizeof (int) );
	printf("sizeof: int*              %zu\n", sizeof(int*));
	printf("sizeof: double*           %zu\n", sizeof(double*));

	printf("sizeof: 10 * sizeof(int)  %zu\n", 10 * sizeof(int) );

	// Beispiel: 10 int-Variablen
	int wieviele = 100000;
	// da könnte man auch scanf aufrufen ...
	// Heap: Kein Problem mit 100000 int's
	int* anfang = malloc(wieviele * sizeof(int));   // memory allocate dynamisch / auf der Halde anlegen

	if (anfang != NULL)
	{
		// wie kann man mit dieser Adresse arbeiten ?????????????????????
		// Wie mit einem Array - bewusst so konzipert !!!!

		for (int i = 0; i < 10; i++) {

			anfang[i] = 2 * i;
		}

		// ACHTUNG !!!!!!!!!!!
		// Muss Speicher wieder freigeben, solange ich die Adresse habe
		free(anfang);
	}
}