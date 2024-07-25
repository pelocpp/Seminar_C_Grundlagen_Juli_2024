#include <stdio.h>

void test_zeiger_01()
{
    int n;       // int Variable

    n = 123;

                 // Deklaration
    int* ip;     // Syntax: Zeiger / Adresse einer Variablen,
                 // die sich auf einen int-Wert bezieht.

    ip = &n;     // Adresse von // Address of

                 // Operator
    *ip = 456;   // Indirekte Zuweisung // weise indirekt zu

    printf("n = %d\n", n);
}

void malZehn(int x)
{
    x = 10 * x;
}

void malZehnVariante(int* px)
{
    int tmp;

    tmp = *px * 10;   // Wert hinter der Adresse / mal Zehn

    *px = tmp;

    // oder

    // *px = 10 * *px;
}

void test_zeiger()
{
    int n = 123;
    printf("%d\n", n);

    malZehn(n);
    printf("%d\n", n);

    malZehnVariante( &n );
    printf("%d\n", n);
}