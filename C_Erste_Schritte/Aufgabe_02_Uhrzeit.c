// =====================================================================================
// VariablenDatentypenOperatoren.c
// =====================================================================================

#include <stdio.h>

int exercise_variablen_datentypen_operatoren()
{
    int tage;              // wir betrachten max. 3650 Tage
    int stunden;           // 0-24 Stunden
    int minuten;           // 0-60 Minuten

    long long sekunden;    // 0-315.360.000 Sekunden

    long long sekundenTage;
    long sekundenStunden;
    int sekundenMinuten;

    printf("Bitte Tage eingeben:");
    scanf_s("%d", &tage);  // & Why: scanf_s benötigt die ADRESSE von 'tage'

    printf("Bitte Stunden eingeben:");
    scanf_s("%d", &stunden);

    if (stunden < 0 || stunden >= 24)
    {
        printf("Falscher Wert fuer Stunden: %d", stunden);
        return -1;
    }

    printf("Bitte Minuten eingeben:");
    scanf_s("%d", &minuten);

    if (minuten < 0 || minuten >= 60)
    {
        printf("Falscher Wert fuer Minuten: : %d", minuten);
        return -1;
    }

    // Verarbeitung
    sekundenTage = tage * 60 * 60 * 24;     // Tage in Sekunden umrechnen
    sekundenStunden = stunden * 60 * 60;    // Stunden in Sekunden umrechnen
    sekundenMinuten = minuten * 60;         // Minuten in Sekunden umrechnen

    sekunden = sekundenTage + sekundenStunden + sekundenMinuten;

    printf("%d Tage %d Stunden und %d Minuten sind %lld Sekunden ",
        tage, stunden, minuten, sekunden);

    return 0;
}

// =====================================================================================
// End-of-File
// =====================================================================================