// #define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Hello Word
int main_01()  // Start / Einsprungpunkt des Programms
{
	printf("Hallo Seminar\n");

	return 0;
}

// Variablen, Datentypen und Bezeicher
int main_02()
{
	int wert;     // SYNTAX: Vereinbarung einer Variablen vom Typ int

	wert = 123;   // SYNTAX: Zuweisung: Der Wert 123 wird in 'wert' geschrieben
	// oder
	// wert = -1;

	double andererWert;

	andererWert = 123.456;

	// Ausgabe:
	printf("Wert: %d == %f\n", wert, andererWert);
}

// Operatoren
int main_03()
{
	int wert;

	wert = (2 + 3) * 4;  // 14 - wieso nicht 20

	printf("Wert: %d\n", wert);

	// Zuweisung
	wert = wert + 1;
	printf("Wert: %d\n", wert);

	// geht k�rzer
	wert++;
	printf("Wert: %d\n", wert);

	// oder auch:
	wert--;
	printf("Wert: %d\n", wert);
}


// Vorbelegung
int main_04()
{
	int i = 0;   // Vereinbarung einer Variablen mit Vorbelegungswert

	printf("Wert: %d\n", i);

	double temperature = 27.5;

	printf("Temperatur heute: %f\n", temperature);
}

// Kontrollstrukturen - if
int main_05()
{
	int n = 0;

	printf("Bitte geben Sie einen Wert fuer n ein: ");
	
	// scanf("%d", &n);      // nicht ganz secure

	scanf_s("%d", &n);    // scanf_s   secure version

	// hier sind noch viele Anweisung vorhanden, die n ver�ndern :)

    if (n > 10)
	{
		printf("n ist groesser 10\n");
	}
	else
	{
		printf("n ist nicht groesser 10\n");
	}

	printf("Ende.");
}

// Kontrollstrukturen - Logische Verkn�pfung von Bedingungen
int main()
{
	int wert1 = 0;
	int wert2 = 0;

	// viele Anweisungen ......
	// zB 
	wert1 = 5;
	wert2 = 25;

	if ( wert1 <= 10 || wert2 <= 20 )
	{
		printf("erfuellt !!!\n");
	}
	else
	{
		printf("nicht erfuellt!\n");
	}

	//if ( !  ( wert1 > 10 && wert2 > 20 )   )
	//{
	//	printf("erfuellt !!!\n");
	//}
	//else
	//{
	//	printf("nicht erfuellt!\n");
	//}

}
