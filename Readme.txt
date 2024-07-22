C Einführung

Peter Loos

Guten Morgen

================================================

Vorstellungsrunde

Peter Loos // Ü 30 Jahren

SW-Entwicklung / Training

C/C++,  Java,  C#, Mobile Programming, (Python),

Back-to-the-Roots: C/C++

========================================

Ohne Vorkenntnisse:  Monolog  // Dialog

Fragen:

== Was sind meine Erwartungen?
== Soll, muss, kann ich nächste Woche in C programmieren!
== Ich will C Code lesen / verstehen können!
== Gibt es Kenntnisse in anderen Progr.Sprachen?

Martin => Roboter: Schnittstelle in C
Alexander => Roboter + Arduino
Simon => eigene Steuerung
Tom => Finanzinformatik

=======================================

Mittagspause: 12.30 

Pausen:  Vor.- / Nachmittag

=======================================

Fragen:

=======================================

Wie gestalte ich dieses Seminar?

a) Tool: Visual Studio

   a) Visual Studio Community 2022

b) Unterlagen:

https://github.com/

https://github.com/pelocpp

https://github.com/pelocpp/c_introduction

====================================================

Hello World

"Empty Project" anlegen  // C++

Name + Verzeichnis, wo das Projekt hin soll ...

Das Projekt ist "leer"

eine Datei hinzufügen: 

ACHTUNG: Die Endung der Datei muss .C sein !!!!!!!!!!!!!!!!

Das ist etwas verwunderlich, aber:

Endung C   ===> C - Übersetzer

Endung C++ ===> C++ - Übersetzer

====================================================

Tooling // Toolkette:

Ein Programm:

Wird mit einem Editor (Notepad) erstellt:

Regeln beachten:

Eine Programmiersprache hat eine Grammatik // Rechtschreibung.

Dies wird von einem Programm überprüft: Übersetzer / Compiler.

Ist der Quelltext korrekt (grammatikalisch):

Maschinenprogramm erstellt ==> Datei, die Anweisungen (Befehle) enthält,
   die die CPU des aktuellen Rechners verstehen / ausführen.

i)   Programm / Quelltext eingeben
ii)  Übersetzen (Korrektheit überprüfen)

         Rechte Maustaste auf der Datei: Kompilieren

iii) Maschinenprogramm erstellen

         Rechte Maustaste auf dem Projekt.

iv)  Programm laufen lassen

         Grüner Pfeil, nicht ausgefüllt.

Bemerkung: Wo ist eigentlich das Programm ???

C:\Peter_Loos\C_Erste_Schritte\x64\Debug\C_Erste_Schritte.exe

In einer Datei mit der Endung .exe

====================================================

Variablen und Datentypen

== Speicher 

== ==> Namen

== ==> Format: Ganze Zahl (123),
               Zahl mit Komma (123.456)
               Zeichen:        'A' oder '?'
               Zeichenketten:  "ABCDE"

Speicher:  Format + Name

Format: Datentyp // Name (Bezeichner)

Speicher: Variable

Beispiel:

	int wert;    // Reserviere ich ein Stück Speicher.

    int ist das Format / der Datentyp für ganze Zahlen

2. Beispiel:

    double andererWert;

    double ist das Format / der Datentyp für Zahlen mit Komma

===========================================================

Liste aller Datentypen:

// Datentyp für ganze Zahlen
short
int 
long

// Datentyp für Zahlen mit Komma
double
float

Wieso mehrere Datentypen für dasselbe ???

Die Größe des reservierten Speichers ist unterschiedlich.

======================================================

Programmiersprachen (C):   Kennen Datentypen (int, double, ...)

Speicher (physikalisch):   Bits und Bytes

>>> Wie wird ein int-Wert in Bits und Bytes abgelegt ???

Beispiel:

Zahl     Speicher

123  ==> 111 1011

Wie wird das berechnet: 

https://de.wikipedia.org/wiki/Zweierkomplement

Verfahren: Zweierkomplement

// Mikrocomputer Programmierung

Bit:   0 oder 1

Byte:  8 Bits

Byte:  Ist die kleinste Einheit, die eine CPU adressieren kann.

Wieso mehrere Datentypen für dasselbe ???

Eine ganze Zahl kann im Speicher in

1 Byte
2 Bytes / Word
4 Bytes / DWord
8 Bytes / QWord

abgelegt werden.

"Je mehr Bytes, desto größer kann die Zahl sein"

Je mehr Bytes, desto größer ist der Wertebereich der darstellbaren Zahlen
im Programm.


Beispiel für 2 Bytes: / 16 Bits

 32.767 ist bei 2 Bytes der größte Wert
    0111 1111 1111 1111

-32.768 ist bei 2 Bytes der kleinste Wert
    1000 0000 0000 0000

Konsequenz: Programmersteller: Vorstellung: Wie groß sind die Werte,
            die ich in einem Programm verarbeiten möchte ???


Umsetzung in C:

1 Byte            unsigned char
2 Bytes / Word    short
4 Bytes / DWord   int    // auch long
8 Bytes / QWord   long long

Optimal:          size_t  // gemäß den Projekteinstellungen.


Für Gleitkommazahlen:

4 Bytes / DWord   float
8 Bytes / QWord   double

Frage: Wieso nicht gleich mit dem größten Wert / Typ arbeiten?

   Bei wenig Werten egal, kommt auf die Anzahl der Werte im Programm an.

2. Antwort: Eine CPU hat Register;

            Das zentrale Rechnerregister ist ein Register mit dem Namen Akku.

            Dieses wird am performantesten in seiner Breite angesprochen:

            Der Datentyp 'int' (modernes C: 'size_t') ist hierfür geeignet.

// ===================================================

Zu den Wertebereichen:

"Schwachstelle" von C:

Wie viele Bytes hat ein 'int' in C: ?????????????????

Hängt vom Rechner (Betriebssystem) ab.


Für die Frage gibt es eine Antwort:  Funktion (operator): sizeof

======================================================

printf: print formatted

Erster Parameter: Zeichenkette

Diese enthalten Stellvertreter:

%d decimal
%f double, float

%ld long
%c  char
%s  Zeichenkette



Bei der Ausgabe wird der Stellvertreter ersetzt durch den Wert der Variablen,
die danach folgt.

ACHTUNG: Stolperfalle:

Jeder Typ (int, double, ...) hat einen eigenen Stellvertreter:

Zur Steuerung der Ausgabe gibt es Spezialzeichen:

\n   == New Line == Neue Zeile

======================================================

Variablen, Datentypen und Bezeicher

======================================================

Operatoren

Gängige operatoren

+  Addition
-  Subtraktion
*  Multiplikation
/  Division

++  Addition von 1
--  Subtraktion von 1

Achtung: Punkt-vor-Strich

Mit Hilfe von Operatoren bildet man "arithmetische Ausdrücke":

2 + 3 * 4      ==> 14

In arithmetische Ausdrücken kann man Klammern verwenden:

(2 + 3) * 4    ==> 20

Einige weitere Operatoren:

wert++;

Ist identisch zu

wert = wert + 1;

Bemerkung:

"Punkt-vor-Strich"

Für die vielen Operatoren in C gibt es eine
Vorrangtabellle:

Precedence = Vorrang auf engl.

https://en.cppreference.com/w/c/language/operator_precedence

Je kleiner der Wert (Precedence),
desto stärker die "Klammerung"

===============================================================

Initialisierung / Vorbelegung

Jede Variable, die in einem Programm verwendet wird,
sollte vorbelegt / initialisiert werden.


===============================================================

Kontrollstrukturen

if
--

Entscheidung:   Bedingung

int wert;

Frage:  Ist wert größer 10 oder nicht ???

C: Anweisung:  if-Anweisung  // Bedingungs-Anweisung

SYNTAX:

if ( bedingung )
{
}

bedingung:  (arithmetischer) ausdruck => wahr oder falsch.

Variante:

if ( bedingung )
{
}
else 
{
}



int wert = 0;

// wert wird verändert

SYNTAX: Bedingung

Beispiel:

wert >  10      // ist wert groesser 10
wert >= 10      // ist wert groesser-gleich 10
wert <  10      // ist wert kleiner 10
wert <= 10      // ist wert kleiner-gleich 10
wert == 10      // ist wert gleich 10
wert != 10      // ist wert ungleich 10




==============================================================

C ist eine format-freie Programmiersprache

Leerzeichen und neue Zeilen gehören nicht zum Programm.

Damit sollten wir VERANTWORTLICH umgehen !!!

(( Python ist eine formatierte Programmiersprache ))

==============================================================

Übung:

== Ein kleiner Taschenrechner

========================================

if ==> IF

AND, OR, ...

Weitere Operatoren: Logische Operatoren 

Logische UND:                   &&  
Logische ODER:                  ||
Logsiches Nicht / Negation:     !

Beispiel 1:

wert1 > 10 UND wert2 > 20

Gegenteil:

wert1 <= 10 ODER wert2 <= 20 

Wertetabelle:

wert1:         5      15     5       15
wert2:        15      15     25      25
Beispiel 1:  falsch  falsch falsch   wahr
Beispiel 2:  wahr    wahr   wahr    falsch

Gegenteil:   wahr    wahr   wahr     falsch

Beispiel 2:

! (wert1 > 10 UND wert2 > 20)

======================================================

2 Übungen:
============

1.) Lesen Sie drei int-Werte von der Konsole ein.

    Geben Sie den größten der drei Werte aus.

    Tipp: if-Anweisung.

1.) Lesen Sie von der Konsole drei Werte ein:

    Für Stunden, Minuten und Sekunden.

    // 70 ... falsch .. dann ist das Programm zu beenden.

    Berechen Sie die Anzahl der Sekunden dieser Eingabe:

    Beispiel:

    2 (Stunden), 30 (Minuten) und 59 für Sekunden.

    Wieviele Sekunden: 2 * 60 * 60 + 30 * 60 + 59 ==>  7.200 + 1.800 + 59 = 9.059




