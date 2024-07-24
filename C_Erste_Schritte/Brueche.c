// Schulmathematik

// 1 / 7 ===> Bruch   // Rationale Zahl

// Bruchrechnung

struct Bruch   // Fraction
{
	int zaehler;
	int nenner;
};

// erste Funktion / erstes Unterprogramm

void printBruch(struct Bruch b)
{
	printf("%d / %d\n", b.zaehler, b.nenner);
}

// 3 mal 1/7 = 3/7
struct Bruch scalarProdukt (struct Bruch b, int scalar)
{
	struct Bruch result;

	result.zaehler = b.zaehler * scalar;
	result.nenner = b.nenner;

	return result;
}

// 1. Aufgabe:
// 3 / 7 und 1 / 7 = 4 / 7

struct Bruch addiereBruch(struct Bruch b1, struct Bruch b2)
{
	// to be done
}

// 2. Aufgabe:
// 3 / 7 mal 2 / 7 = 6 / 49

struct Bruch multipliziereBruch(struct Bruch b1, struct Bruch b2)
{
	// to be done
}

// Sonderaufgabe:
// 2 / 8 und 2 / 8 = 4 / 8 = 1 / 2  
// Wie könnten wir das lösen .............................

void test_bruch()
{
	struct Bruch b = { 1, 7 };
	printBruch(b);

	struct Bruch ergebnis;
	ergebnis = scalarProdukt(b, 3);
	printBruch(ergebnis);
}

