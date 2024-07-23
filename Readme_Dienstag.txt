C Einführung

Peter Loos

Guten Morgen

Dienstag

================================================

Dienstag:

== for-Anweisung

== Übungen

== Feld / Array

== Unterprogramme

================================================

== for-Kontrollstruktur

Eine zweite Wiederholungsanweisung 
mit einer "kompakteren" Grammatik / Syntax

SYNTAX:

for (  Part I ; Part II ; Part III ) 
{
}

Beispiel:

for ( int i = 0 ; i < 10 ; i = i + 1 ) 
{
    printf ("i = %d\n", i);
}

Part I:   deklariert eine Variable
Part II:  Bedingung, wie lange der Rumpf der for-Anweisung
          ausgeführt werden soll
Part III: Variable "i" verändern ( zum Beispiel "hochzählen")

Beobachtung:

Eine for-Anweisung kann als while-Anweisung formuliert werden
und umgekehrt.

Beispiel:

for ( int i = 0 ; i < 10 ; i = i + 1 ) 
{
    printf ("i = %d\n", i);
}

ist identisch zu

int i = 0;
while ( i < 10 ) 
{
   printf ("i = %d\n", i);
   i = i + 1;
}

Zweites Beispiel:   

Embedded Programmierung
Haupt-Schleife in einem Controller (Endlos-Schleifen):

A) mit while:

while (1)   // Endlos-Schleife mit while
{
}


B) mit for:

for ( ; 1 ; )   // Endlos-Schleife mit for
{
}



Nomenklatur:

Block // Rumpf

== Rumpf einer if-Anweisung
== Block, der zu einer if-Anweisung gehört

{
}

Alle Anweisungen eines Blocks (Rumpfs)
bilden eine Einheit.

// =====================================

Merker:

"Globale Variable"

========================================

Wie bringe ich ein Programm zum Laufen ???

== Zeile für Zeile einzeln ausführt
== Inhalte von Variablen anschaut währdend der Ausführung

3 magische Tasten:

A) Einen Haltepunkt setzen  : F9 -- Klick ganz links in der Zeile


B) Gehe zu Haltepunkt / Starten des Programms:
                            : F5 -- Klick auf grünes Dreieck (ausgefüllte)

C) Eine Zeile / Anweisung ausführen:
                            : F10 -- Pfeil "drüber"

D) Ende / Abbruch: Rotes Rechteck

"Debugger" : Tool //  Programm

Ist in Visual Studio integriert

======================================

Variablen // globale Variablen

Welche Arten von Variablen gibt es ????

A) Globale Variablen
B) Lokale Variablen
C) Dynamische Variablen

A) Globale Variablen:

== Werden AUSSERHALB von Funktionen deklariert.
== Also auf der obersten Ebene.

Funktionalität: Überall verwendbar (lesen oder schreiben // verändern) !!!

B) Lokale Variablen:

== Werden in einem Rumpf // Block vereinbart.
== Funktionalität: Sind nur bzw. in genau diesem Rumpf // Block verfügbar.

Beobachtungen bei lokalen Variablen
-----------------------------------

==================================================

Wiederholung // Stand Dienstag Vormittag:

Kontrollstrukturen:

if
while
for

Wann nehme ich for und wann while

== for :   Lesen: Charakter: Wie oft tue ich etwas  
== while : Lesen: Charakter: Wie lange ist eine Bedingung erfüllt.

Technisch: Identisch 

Variablen:

Globale und lokale Variablen

========================================================

Übungen:

3 Aufgaben
----------

Aufgabe 1:
==========

"Teuflische Folge"

Zahlenfolge:

Startwert: n

Nächtes Element:  

n / 2,      wenn n gerade
n * 3 + 1,  wenn n ungerade

Beispiel:

7, 22, 11, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1 .

Bei 1 ist Ende / Abbruch.

Bis heute konnte man nicht beweisen, dass für JEDEN STARTWERT
die Folge nach ENDLICH vielen Schritten zu Ende ist.

"Collatz Folge"

Programm:

Startwert:

int n = 7;

oder

scanf 

Dann die Elemente der Folge ausgeben.

// ================================================

Detail: Wann ist eine Zahl gerade bzw. ungerade ???

// ================================================

Wir legen einen Geldbetrag von 1000.- Euro an.

double betrag = 1000.0;

Wir bekommen im Jahr 5% Zinsen.

Wie entwickelt sich die Anlage in einem Verlauf von 10 Jahren,
wenn die Zinsen jedes Jahr mit angelegt werden?

for

Ausgabe:

Jahr 1:  1000.0
Jahr 2:  1050.0    - plus Zinsen des letzen Jahres
Jahr 2:  1102,50

// ================================================

Aufgabe 3:

Bundestagswahl:

1: CDU   
2: SPD
3: FDP
4: Grüne

Ablauf des Programms:

"Welche Partei wählen Sie?"

Eingabe: 3  ( also für FDP)

Ausgabe:

1: CDU     0 %   
2: SPD     0 %
3: FDP     100 %
4: Grüne   0 %


"Welche Partei wählen Sie?"

Eingabe: 2  ( also für SPD)


1: CDU     0 %   
2: SPD     50 %
3: FDP     50 %
4: Grüne   0 %

"Welche Partei wählen Sie?"

Eingabe: 3  ( also für FDP)

1: CDU     0 %   
2: SPD     33 %
3: FDP     66 %
4: Grüne   0 %


=========================================================

Felder // Array

Was ist ein Feld ???

Ich benötige mehrere Variablen DESSELBEN Typs !!!

Beispiel:

A) Lotto-Zahlen:

   6 Zahlen ==> int 

SYNTAX: int lotto_zahlen [ 6 ];

B) Temperaturen in einem Monat:

   Der Einfachheit halber: 30 Tage.

   double temperaturen [30];

Es geht NICHT:

int n;
scanf("%d", &n);   // n einlesen
double temperaturen [n]; DAS GEHT NICHT 

Die Länge des Felds MUSS KONSTANT sein.

Wie wird ein Feld

== typischerweise vorbelegt?

== typischerweise durchlaufen?



======================================================

Wo sucht er // der Compiler ???

Dateien          .C

Object File:     .Obj


Maschinencode:   .exe


======================================================

Wir legen ein Feld der Länge 6 an.

Es ist ein GLOBALES Feld.

Wir belegen das Feld vor - mit Zufallszahlen im Bereich von 1 .. 100.

Wir durchlaufen das Feld der Länge 6.

== Wir berechnen die Summe aller Elemente in diesem Feld.

== Wir bestimmen das kleinste Element in diesem Feld.

== Wir bestimmen das groesste Element in diesem Feld.



