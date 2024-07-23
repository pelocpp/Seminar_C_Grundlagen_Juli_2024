#include <stdio.h>

void main_tom_frage()
{
    double betrag = 1000.0;
    double zinsen;
    int jahr = 0;

    printf("Bitte Betrag eingeben: ");
    scanf_s("%lf", &betrag);
    printf("Betrag: %f\n", betrag);

    while (jahr < 10)
    {
        zinsen = (betrag / 100.0) * 5.0;
        betrag = betrag + zinsen;

        printf("Jahr %d: %.2f \n", jahr, betrag);

        jahr++;
    }
}
