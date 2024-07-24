// =====================================================================================
// Unterprogramme.c
// =====================================================================================

#include <stdio.h>

double AreaCircle(double radius)
{
    double area = 2 * 3.141592653589793 * radius;
    return area;
}

double AreaRectange(double width, double height)
{
    double area = width * height;
    return area;
}

void exercises_areas()
{
    double area = 0.0;

    double r = 20.0;

    area = AreaCircle(r);

    printf("Circle with radius %f has an area %lf.\n", r, area);

    double w = 20.0;
    double h = 30.0;

    area = AreaRectange(w, h);

    printf("Rectange with height %lf and width %lf has area %lf.\n", h, w, area);
}


double doubled_interest_rate(double capital, double rate)
{
    double newCapital;

    newCapital = capital;

    int year = 1;

    while (newCapital < 2 * capital) {

        double interest = (newCapital / 100.0) * rate;

        newCapital = newCapital + interest;

        printf("Year %d: %lf\n", year, newCapital);

        year = year + 1;
    }
}

void exercise_doubled_interest_rate()
{
    doubled_interest_rate(1000.0, 5.0);
}


void exercise_unterprogramme()
{
    exercise_doubled_interest_rate();
}

// =====================================================================================
// End-of-File
// =====================================================================================
