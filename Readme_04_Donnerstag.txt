C Einführung

Peter Loos

Guten Morgen

Donnerstag

================================================

Präprozessor

Zeichenketten

Datentyp Zeiger / Pointer

new / delete

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

