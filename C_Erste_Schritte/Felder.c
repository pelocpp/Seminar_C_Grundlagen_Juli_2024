#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Felder

// Vorteil: Ist die Laenge zu ändern, muss man nur an EINER
// Stelle den Wert anpassen

#define  Length   100

// globales Feld // globale Variable
extern int lotto_zahlen[Length];

int numbers[Length];

void main_random()
{
	srand(time(0));

	int n = rand();   // random // 0 .. 32767

	n = n % 100 + 1;      // 1 .. 100  // zuvor: 0 .. 99

	printf("n = %d\n", n);

	n = rand();   // random
	printf("n = %d\n", n);
}


void main_20()
{
	// Feld vorbelegen
	for (int i = 0; i < Length; i++)
	{
		numbers[i] = 1;
	}

	// Feld durchlaufen
	for (int i = 0; i < Length; i++)
	{
		printf("Wert an der Stelle %d:  %d\n", i, numbers[i]);
	}
}

void main_lotto()
{
	// Zugriff auf ein Element eines Felds

	// Lesen des ERSTEN Elements
	int zahl;

	zahl = lotto_zahlen[0]; 

	// Schreiben des ersten Elements
	lotto_zahlen[0] = 33;
}