// =====================================================================================
// Felder von Strukturen // Aufgabe_09_KontakteVerwaltung
// =====================================================================================

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Entry
{
	char firstName[32];
	char lastName[32];
	int  phoneNumber;
};

struct EntryImproved
{
	char* firstName;
	char* lastName;
	int   phoneNumber;
};

// feste Länge der Namen ... malloc wäre hier auch eine Möglichkeit

#define Length 10

struct Entry myContacts[Length];

struct EntryImproved myContactsImproved[Length];

void test_enter_contacts()
{
	// A) Direkter Zugriff auf das Feld
	
	//myContacts[0].firstName = "Hans";
	//myContacts[0].lastName = "Mueller";

	strcpy_s(myContacts[0].firstName, 32, "Hans");
	strcpy_s(myContacts[0].lastName, 32, "Mueller");
	myContacts[0].phoneNumber = 123456;

	// B) Mit Hilfe einer Strukturvariablen
	struct Entry tmp = {"Susi" , "Wagner" , 123123};
	myContacts[1] = tmp;
}

void test_enter_contacts_improved()
{
	// Vor- und Nachname von der Konsole einlesen
	char buffer[64] = { '\0' };
	int  number;
	char* ptrFirstName;
	char* ptrLastName;
	
	printf("Bitte Vornamen eingeben: ");
	scanf_s("%s", buffer, 64);

	// passgenau einen dynamischen Bereich in der Struktur struct EntryImproved anlegen
	size_t lenFirstName = 1 + strlen(buffer); // Die '\0' nicht vergessen !!!
	ptrFirstName = malloc( lenFirstName * sizeof (char) );
	if (ptrFirstName == NULL) {
		return;
	}
	strcpy_s(ptrFirstName, lenFirstName * sizeof(char), buffer);

	printf("Bitte Nachnamen eingeben: ");
	scanf_s("%s", buffer, 64);

	// passgenau einen dynamischen Bereich in der Struktur struct EntryImproved anlegen
	size_t lenLastName = 1 + strlen(buffer); // Die '\0' nicht vergessen !!!
	ptrLastName = malloc(lenLastName * sizeof(char));
	if (ptrLastName == NULL) {
		return;
	}
	strcpy_s(ptrLastName, lenLastName * sizeof(char), buffer);

	printf("Bitte Tel.Nummer eingeben: ");
	scanf_s("%d", &number);

	// Fehlt noch: Die Zeiger und Nummer in die Struktur EntryImproved übernehmen
	// und die Struktur in das Feld eintragen

	// Annahme: Der erste Eintrag im Feld ist leer 

	struct EntryImproved entry = { ptrFirstName , ptrLastName, number };

	myContactsImproved[0] = entry;
}

void test_print_contacts_improved()
{
	for (int i = 0; i < Length; i++) {

		if (myContactsImproved[i].firstName != NULL) {

			printf("%s %s: %d\n",
				myContactsImproved[i].firstName,
				myContactsImproved[i].lastName,
				myContactsImproved[i].phoneNumber);
		}
	}
}

void test_release_contacts_improved()
{
	for (int i = 0; i < Length; i++) {

		if (myContactsImproved[i].firstName != NULL) {

			free(myContactsImproved[i].firstName);
			free(myContactsImproved[i].lastName);
		}
	}
}

void test_contacts()
{
	// test_enter_contacts();
	test_enter_contacts_improved();
	test_print_contacts_improved();
	test_release_contacts_improved();
}

void main()
{
	test_contacts();
}

// =====================================================================================
// End-of-File
// =====================================================================================
