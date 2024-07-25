// =====================================================================================
// Aufgabe zu Zeichenkettten // Aufgabe_08_Zeichenketten.c
// =====================================================================================

#include <stdio.h>

static void toUpper(char kette[])
{
	int i = 0;

	while (kette[i] != '\0')
	{
     // if (kette[i] >= 97 && kette[i] <= 122) {
		if (kette[i] >= 'a' && kette[i] <= 'z')
		{
			kette[i] = kette[i] - 32;
		}

		i++;
	}
}

// exchangeLowerAndUpper

void toLower(char kette[])
{
	int i = 0;

	while (kette[i] != '\0')
	{
		if (kette[i] >= 'A' && kette[i] <= 'Z') {
			kette[i] = kette[i] + 32;  // 32 = 'a' - 'A'
		}

		i++;
	}
}

void reverse(char kette[])
{
	// compute length
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

void exercise_test_reverse()
{
	char vieleZeichen[] = "ABC";
	printf("%s\n", vieleZeichen);

	reverse(vieleZeichen);
	printf("%s\n", vieleZeichen);
}

void exercise_zeichenketten()
{
	char vieleZeichen[] = "!abcde123vwxyz?";
	                   // "!ABCDE123VWXYZ?";

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
	exercise_test_reverse();
    exercise_zeichenketten();
}

// =====================================================================================
// End-of-File
// =====================================================================================
