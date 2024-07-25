C Einführung

Peter Loos

Guten Morgen

Donnerstag

================================================

Präprozessor

Zeichenketten

Datentyp Zeiger / Pointer

new / delete Dynamische: Speicherverwaltung

Felder mit Strukturen

================================================

Hinweis:

"Nicht alle Codepfade geben einen Wert zurück"

================================================

Der Präprozessor

Sind spezielle Anweisungen, die in der ersten Spalte mit # anfangen.

a) Include-Anweisungen

#include <stdio.h>  // printf
#include <stdlib.h> // malloc, free
#include <string.h>

#include <math.h>   // Pi

b) define-Anweisung

Wir arbeitet der Präprozessor:  Reine Textersetzung

bei #defines: Text wird ausgetauscht.
bei #includes: Text der anderen Datei wird eingefügt.


== Quellcode schreiben

== Der Präprozessor liest und modifiziert den Quellcode

== Quellcode übersetzen (kompilieren)

== Programm ausführen (direkt, Debugger)


=====================================================

Zeichen und Zeichenketten

Ein Zeichen ist ein EINZELNES Zeichen

Datentyp: char

SYNTAX:  '?'

Bemerkung: Es gibt auch multi-character Literale (Konstante).

Eine Zeichenkette besteht aus mehreren Zeichen.

Datentyp:

2 Optionen:  

i)  Ein Feld (Array) vom Typ char
ii) const char*

SYNTAX:  "ABC"

// Wie werden Zeichen im Speicher abgelegt?

Es gibt eine Umsetzungstabelle:   ASCII - Tabelle

Zeichen  <==> dezimaler Wert

Es gibt eine bestimmte Dualität 
zwischen Zeichen und ganzen Zahlen:

// ===========================================================

Zeichenketten // Zeichenfolgen  // Strings

A) In einem Feld von Zeichen:

SYNTAX:  "ABC"

oder    'A', 

Wie wird eine Zeichenkette im Speicher abgelegt?

"ABCDE"

i)  Sequenz / Folge aller Zeichen
ii) Die terminierende Null am Ende muss als letztes Zeichen die
    Folge abschließen / terminieren.

// ===================================================

Schreiben Sie 3 Unterprogramme:

a) toUpper
b) toLower
c) reverse

Alle drei Unterprogramme haben eine Zeichenkette als Parameter
und 
a) Wandeln alle Kleinbuchstaben in Großbuchstaben um
b) Wandeln alle Großbuchstaben in Kleinbuchstaben um
c) Kehrt die Reihenfolge der Zeichen um ( "123" wird "321" )

================================================================

static: Bewirkt, dass die Funktion NICHT IN ANDEREN

        Dateien zur Verfügung steht / aufgerufen werden kann.

Ich erhalte KEINE FEHLERMELDUNG der Art "Multiple Definition"

================================================================

C als Programmiersprache:

== Fundament

== Kür / Fortgeschrittene Aspekte

-- Zeiger / Pointer  (Embedded Programming)

Adresse im Speicher:  0x00AFD12A

In C: "Robustheit" ===> Adressen in C sind mit einem Datentyp verbunden.

ACHTUNG:

"=": Anzahl der Dereferenzierungen bei "int *" und "int"
unterschiedlich.

FEHLER  ( keine Warning )

====================================================

Unterprogramme

Funktion (return)  // Proezduren (void)

Parameter // Stellvertreter

Technik der Übergabe von Parametern

https://github.com/pelocpp/cpp_introduction/blob/master/Cpp_Introduction/Markdown/ParameterPassingTechniques.md

Standard:
--------

Parameterübergabemechanismus "Call-by-Value"
--------------------------------------------

============> Auf einer KOPIE arbeiten.

2. Variante:
------------

Parameterübergabemechanismus "Call-by-Address"

============> Auf dem ORIGINAL mit Hilfe einer Adresse arbeiten.


==============================================================

Pointer / Zeiger:

A) Parameterübergabe

B) Dynamischer Speicher

-- Was ist dynamischer Speicher ???

-- Welche Arten von Speicher gibt es überhaupt ?????????

https://github.com/pelocpp/c_introduction/blob/master/C_Introduction/Tutorial/MemoryManagement/MemoryManagement.md

malloc liefert einen Speicherbereich zur Verfügung // Anfangsadresse zurück.

Dieser Speicherbereich kann solange verwendet werden,
bis wir ihn mit free wieder freigeben.

===========================================================

