C Einführung

Peter Loos

Guten Morgen

Mittwoch

================================================

Mittwoch

== Unterprogramme

== Übungen

== Array an Unterprogramm übergeben

================================================

== Unterprogramme

-- Struktur eines C-Programms

== Was ist ein Unterprogramm ???

-- Das Zusammenfassen mehrerer Anweisungen
   in einem Konstrukt mit Namen

-- Diese "mehreren Anweisungen" lassen sich mit dem Namen
   aufrufen

-- Vorteile: Brauche ich diese "mehreren Anweisungen" öfters,
   dann stehen diese immer unter dem Namen zur Verfügung.

SYNTAX:

Rückgabetyp NAME ( Parameter )
{
   // anweisungen
}

Einfachste Variante:

void NAME ( )
{
   // anweisungen
}


Beobachtung einer Warning:

warning C4013: "GutenMorgen" undefiniert;

Annahme: extern mit Rückgabetyp int

Was ist ein Parameter:

A) Ein Stellvertreter für einen Wert:

   Werte haben einen Datentyp

B) Beim Aufruf des Unterprogramms ist ein realer Wert mitzugeben.

=========================================================

SYNTAX:

Rückgabetyp NAME ( Parameter )
{
   // anweisungen
}

Begriff: Unterprogramm
----------------------

Man unterscheidet ZWEI ARTEN von Unterprogrammen:

A) Solche, die NICHTS (void) zurückliefern

   ==> Prozedur // Unterprogramm // Subroutine

B) Solche, die etwas berechnen und ein Ergebnis zurückliefern

   ==> Funktion // Function

Schlüsselwort 'return'

Es kann in 2 Varianten verwendet werden:

return;

return wert;

Hinweis:

"void"-Funktion gibt einen Wert zurück

 warning C4716: "summe": Muss einen Wert zurückgeben

 Muss ==> Fehler

warning C4313: „printf“:
„%s“ in der Formatzeichenfolge steht mit dem Argument 1 vom Typ „int“
in Konflikt.

Warum gibt es so viele Warnings in C und keine Fehler?

Dennis Ritchie:

"A programmer knows what he does"  :)

 =========================================================

 Beobachtung:

 Für das Hauptprogramm 

 // ist das Unterprogramm mit Namen 'main'

 gibt es 2 Varianten:

void main()
{
   // anweisungen
}

ODER

int main()
{
   // anweisungen

   return 0;
}




===========================================================

Übungen:

A) 

Fläche eines Rechtecks:

Schreiben Sie ein Unterprogramm 'AreaRecangle',

das die Fläche eines Rechtecks berechnet.

Die Breite und Höhe des Rechtecks dürfen im Programm stehen:

double width = 100.0;

Das Ergebnis ist als Rückgabewert von dem Unterprogramm zurückzuliefern
und wiederum im Hauptprogramm auszugeben.

==============================================================


B) 

Fläche eines Kreises:

Schreiben Sie ein Unterprogramm 'AreaCircle',

das die Fläche eines Kreises berechnet.

Der Radius des Kreises ist von der Konsole einzulesen

und an das Unterprogramm zu übergeben.

Das Ergebnis ist als Rückgabewert von dem Unterprogramm zurückzuliefern
und wiederum im Hauptprogramm auszugeben.

Radius: double

scanf_s ("%lf", &radius);

double Pi = 3.14;

==========================================================

C)

Schreiben Sie ein Unterprogramm 'DoubledInterestRate',

das in zwei Parametern ein Startkapital und einen Zinssatz (jährlich) entgegennimmt.

Als Rückgabewert liefert das Unterprogramm einen ganzzahligen Wert zurück,

der beschreibt, nach wie vielen Jahren das eingesetzte Kapital sich verdoppelt hat.

Beispiel:

1000.0 Euro

Zinsatz: 5

Wieviele Jahre:  Betrag: >= 2000.0 auf dem Konto.

==========================================================

Wie kann man mehrere Werte aus einem Unterprogramm zurückgeben ???

A) Strukturen:  2 Werte : Anzahl Jahre ("15") und "2078"

B) Parameter mit Adressen : Anzahl Jahre ("15") und "2078"

C) Mit einem Array: Da müsste man - zum Beispiel - ein Array
   der Länge 100 übergeben .... 
   im 0.-ten, 1.-ten, etc. Eintrag ist dann der entsprechende Verzinsungskapita
   enthalten ... Wann sind keine Infos im Arrray mehr ... 0 drin steht

D) double kapitalProJahr[50] = { 0.0 };  // Fixed Size !!!! 

   Hier haben wir ein Problem mit dem FIXEN WERT 50:

   ==> dynamische Speicherverwaltung // malloc // free
   

============================================================

Struktur

Was ist eine Struktur?

Eine Möglichkeit, mehrere Variablen, die logisch zusammengehören,

in einem gemeinsamen Konstrukt zu definieren.

Beispiel:

Uhrzeit:

Stunden, Minuten und Sekunden

int stunden;
int minuten;
int sekunden;

2 Uhrzeiten:

Wie geht das mit einer Struktur:

struct Time
{
	int stunden;
	int minuten;
	int sekunden;
}

================================================

Arrays  // Strukturen

Unterprogramme

(Arrays oder) Strukturen an ein Unterprogramm übergeben.

================================================

Datentyp ZEIGER // POINTER

