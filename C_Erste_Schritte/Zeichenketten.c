// Zeichen und Zeichenketten

#include <stdio.h>

void test_zeichen()
{
	char ch = '?';
	printf("%c\n", ch);

	int n = 35;
	printf("%c\n", n);

	ch = 'A';
	printf("%d\n", ch);

	// char und int können wechselweise zugewiesen werden
	n = 'G';
	printf("%d\n", n);

	// ch = 72;
	ch = 0x5A;    // == 'Z'
	printf("%c\n", ch);
}

void test_ascii_table()
{
	for (int i = 0; i <= 255; i++) {
		printf("%d - %c\n", i, i);
	}
}

// ===========================================================

void test_string_01()
{
	char zeichenkette[] = "ABCDE";
	printf("Zeichenkette: %s\n", zeichenkette);

	// int zahlen[5] = { 1, 2, 3, 4, 5 };

	// Stolperfalle 1
	char zeichenkette2[] = { 'A', 'B', 'C', 'D', 'E' , 0  };
	printf("Zeichenkette: %s\n", zeichenkette2);

	// Stolperfalle 2
	char zeichenkette3[5] = "ABCDE";
	printf("Zeichenkette: %s\n", zeichenkette3);

	// SYNTAX bzgl. des letzten Zeichen
	char kurz1[] = { 'A', 0 };
	printf("Kurz: %s\n", kurz1);

	char kurz2[] = "A";
	printf("Kurz: %s\n", kurz2);

	char kurz3[] = { 'A', '\0' };
	printf("Kurz: %s\n", kurz3);
}

void test_string_vorbereitung_01()
{
	// Umwandlung Klein nach Groß

	char ch = '!';

	printf("ch = %c\n", ch);

	// ist ch ein Kleinbuchstabe
	if (ch >= 97 && ch <= 122) {
		ch = ch - 32;
	}

	printf("ch = %c\n", ch);
}

void toUpper(char zeichen[])
{
	int i = 0;

	// wielange kann ich zugreifen
	// zeichen[i] 

	//while (zeichen[i] != '\0')
	//{
	//	// .....
	//}
}

void test_klein_nach_gross()
{
	char vieleZeichen[] = "asadwsASDASD123";

	printf("%s\n", vieleZeichen);
	toUpper(vieleZeichen);
	printf("%s\n", vieleZeichen);
}




