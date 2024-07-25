// =====================================================================================
// Aufgabe zu Zeichenkettten // Aufgabe_08_Zeichenketten.c
// =====================================================================================

#include <stdio.h>

void toUpper(char kette[])
{
	int i = 0;

	while (kette[i] != '\0')
	{
		if (kette[i] >= 'a' && kette[i] <= 'z') {
			kette[i] = kette[i] - 32;
		}

		i++;
	}
}

void toLower(char kette[])
{
	int i = 0;

	while (kette[i] != '\0')
	{
		if (kette[i] >= 'A' && kette[i] <= 'Z') {
			kette[i] = kette[i] + 32;
		}

		i++;
	}
}

void reverse(char kette[])
{
	int length = 0;
	while (kette[length] != '\0') {
		length++;
	}

	for (int i = 0; i < length / 2; i++) {

		char ch = kette[length - 1 - i];
		kette[length - 1 - i] = kette[i];
		kette[i] = ch;
	}
}

void exercise_zeichenketten()
{
	char vieleZeichen[] = "!abcde123vwxyz?";
	printf("%s\n", vieleZeichen);

	toUpper(vieleZeichen);
	printf("%s\n", vieleZeichen);

	toLower(vieleZeichen);
	printf("%s\n", vieleZeichen);

	reverse(vieleZeichen);
	printf("%s\n", vieleZeichen);
}

void main()
{
    exercise_zeichenketten();
}

// =====================================================================================
// End-of-File
// =====================================================================================
