//Zinsberechnung 
//double zinssatz, double startkapital

// Redesign: Liefert jetzt Anzahl der Jahre zurück !!!
int DoubledInterestRateMitArray (double zinssatz, double kapital, double kapitalProJahr[])
{
    double zinsen;
    double doppelt = 0;
    doppelt = kapital * 2;

    // den eingezahlten Betrag an der Stelle 0 im Feld eintragen
    kapitalProJahr[0] = kapital;

    for (int jahre = 1; kapital <= doppelt; jahre++)
    {
        printf("===> Jahr: %d: kapital = %lf\n", jahre, kapital);

        zinsen = (kapital / 100) * zinssatz;
        kapital = kapital + zinsen;

        // Feld fuellen
        kapitalProJahr [ jahre ] = kapital;  // berechnetes Kapital an der Stelle 'jahre' reinschreiben

        if (kapital >= doppelt)
        {
            return jahre;
        }
    }
}


double DoubledInterestRate(double zinssatz, double kapital)
{
    double zinsen;
    double doppelt = 0;
    doppelt = kapital * 2;

    for (int jahre = 1; kapital <= doppelt; jahre++)
    {
        printf("Jahr: %d: kapital = %lf\n", jahre, kapital);

        zinsen = (kapital / 100) * zinssatz;
        kapital = kapital + zinsen;

        if (kapital >= doppelt)
        {
            return kapital;
        }
    }
}


void main_tom_zwei()
{
    //========================================================================
    //Rechteck
    //double laenge = 10;
    //double breite = 20;

    //double flaeche_r = arearectangle(laenge, breite);
    //printf("Flaecheninhalt-Rechteck: %.2lf\n", flaeche_r);

    //========================================================================
    //Kreis
    //double radius = 5;

    //double flaeche_k = kreis(radius);
    //printf("Flaecheninhalt-Kreis: %.2lf\n", flaeche_k);

    //========================================================================
    //Zinsberechnung
    double zinssatz = 5;
    double kapital = 1000;

    //double betrag = DoubledInterestRate(zinssatz, kapital);
    //printf("Betrag: %.2lf\n", betrag);

    double kapitalProJahr[50] = { 0.0 };  // Fixed Size !!!! Problem der Laenge :)

    int anzahlJahre = DoubledInterestRateMitArray(zinssatz, kapital, kapitalProJahr);
    printf("Anzahl der Jahre: %d\n", anzahlJahre);

    for (int i = 0; i <= anzahlJahre; i++)
    {
        printf("%2d. Jahr: Kapital = %.2lf\n", (i+1), kapitalProJahr[i]);
    }
}