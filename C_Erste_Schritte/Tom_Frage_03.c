#include <stdio.h>

static void toUpper(char zeichen[])
{
    int i = 0;

    //   ;    LEERE Anweisung
 

    if (zeichen[i] >= 97)
        ;
    {

    }

    while (zeichen[i] != 0)
    {
        if (zeichen[i] >= 97 && zeichen[i] <= 122); // KEIN SEMIKOLON
        {
            zeichen[i] = (zeichen[i] - 32);
        }
        i++;
    }

   // return zeichen[i];
}

static void toLower(char zeichen[])
{
    int i = 0;

    // wielange kann ich zugreifen
    // zeichen[i] 

    while (zeichen[i] != 0)
    {
        if (zeichen[i] >= 65 && zeichen[i] <= 90);
        zeichen[i] = (zeichen[i] + 32);
        i++;
    }
}

static void main_tom_tom()
{
    char gross[] = "abc?123";

    printf("Umwandlung zu Grossbuchstaben: \n");
    printf("%s\n", gross);
    toUpper(gross);
    printf("%s\n\n", gross);

    char klein[] = "ABC123";

    printf("Umwandlung zu Kleinbuchstaben: \n");
    printf("%s\n", klein);
    toLower(klein);
    printf("%s\n", klein);
}

