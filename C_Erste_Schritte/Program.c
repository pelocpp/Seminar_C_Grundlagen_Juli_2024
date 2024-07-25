// #define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

extern int lotto_zahlen[6];

void exercise_array_minimum();
void exercise_unterprogramme();
void test_struct_2();
void test_bruch();
void test_zeichen();
void test_ascii_table();
void test_string_01();
void test_string_vorbereitung_01();
void test_zeiger();
void test_dynamic_memory();

void main()
{
	test_dynamic_memory();
}

// Hello Word
int main_01()  // Start / Einsprungpunkt des Programms
{
	lotto_zahlen[0] = 35;

	printf("Hallo Seminar\n");

	return 0;
}

// Variablen, Datentypen und Bezeicher
void main_02()
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
void main_03()
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
void main_04()
{
	int i = 0;   // Vereinbarung einer Variablen mit Vorbelegungswert

	printf("Wert: %d\n", i);

	double temperature = 27.5;

	printf("Temperatur heute: %f\n", temperature);
}

// Kontrollstrukturen - if
void main_05()
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
void main_06()
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


// Von Tom:

void main_tom()
{
	int wert1 = 0;
	int wert2 = 0;
	int wert3 = 0;
	printf("Bitte Sie eine Ganzzahl ein: ");

	scanf_s("%d", &wert1);  // & wert1 bedeutet, dass scanf auf die ADRESSE von wert1 zugreifen kann

	printf("Bitte Sie eine Ganzzahl ein: ");
	scanf_s("%d", &wert2);
	printf("Bitte Sie eine Ganzzahl ein: ");
	scanf_s("%d", &wert3);

	if (wert1 > wert2 && wert1 > wert3)
	{
		printf("Der folgende Wert ist der groesste %d \n", wert1);
	}

	if (wert2 > wert1 && wert2 > wert3)
	{
		printf("Der folgende Wert ist der groesste %d \n", wert2);
	}

	if (wert3 > wert1 && wert3 > wert2)
	{
		printf("Der folgende Wert ist der groesste %d \n", wert3);
	}
}

void main_07()
{
	int n = 1;
	printf("Bitte geben Sie einen Wert fuer n ein: ");
	scanf_s("%d", &n);
	printf("n: %d", n);
}

void main_08()
{
	int n = 1;

	while (n < 10)
	{
		// Unerwarteter Wert f�r n: n == 4 bedeutet FALSCHER Wert
		//if (n == 4)
		//{
		//	break;
		//}

		// Unerwarteter Wert f�r n: n == 4 bedeutet FALSCHER Wert
		// M�chte Schleife NICHT Verlassen, sondern mit dem n�chsten Wert
		// von n fortfahren
		if (n == 4)
		{
			n = n + 1;
			continue;
		}

		printf("Erfuellt! %d\n", n);

		n = n + 1;  // Bedingung �ndern nicht vergessen
	}

	// Unerwarteter Wert f�r n: n == 4 bedeutet FALSCHER Wert

	//while (n < 10 && n != 4)
	//{
	//	printf("Erfuellt! %d\n", n);

	//	n = n + 1;  // Bedingung �ndern nicht vergessen
	//}

	printf("Ende\n");
}

void main_09()
{
	printf("for-Kontrollstruktur\n");

	for ( int i = 0; i < 10; i = i + 1)
	{
		if (i == 5)
		{
			continue;
		}

		printf("i = %d\n", i);
	}

	printf("Ende\n");
}

// globale Variable
// Empfehlung
int g_wert = 1;    // g steht f�r global

void main_10()
{
   int nochEinWert = 2;

	printf("Wert: %d\n", nochEinWert);
}

void main_was_anderes()
{
	int Wert = 2;

	printf("Ebenfalls Wert: %d\n", g_wert);
}

void main_11()
{
	printf("for-Kontrollstruktur und lokale Variablen\n");

	int i = 99; // erste lokale Variable i

	for (int i = 0; i < 5; i++ )  // zweite lokale Variable i
	{
		printf("i = %d\n", i);    // wird hier verwendet
	}

	printf("i: %d\n", i);

	printf("Ende\n");
}

void main_12()
{
	printf("for-Kontrollstruktur und lokale Variablen\n");

	int i = 99; // erste lokale Variable i

	for (int i = 0; i < 5; i++)  // zweite lokale Variable i
	{
		printf("i = %d\n", i);    // wird hier verwendet
	}

	printf("i: %d\n", i);

	printf("Ende\n");
}

void main_13()
{
	printf("gerade / ungerade\n");

	int n = 8;

	int rest = n % 2;   // Operator f�r den Rest // Modulo  

	if (rest == 1) 
	{
		printf("Rest: %d --  ungerade\n", rest);
	}
	else
	{
		printf("Rest: %d --  gerade\n", rest);
	}

	printf("Ende\n");
}