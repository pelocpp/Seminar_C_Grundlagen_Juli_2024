// Strukturen

#include <stdio.h>

struct Time
{
	int hours;
	int minutes;
	int seconds;
};

void printTime(struct Time t)
{
	printf("Uhrzeit: %02d:%02d:%02d\n", t.hours, t.minutes, t.seconds);
}

void test_struct()
{
	struct Time now;

	// A)
	now.hours = 15;
	now.minutes = 42;
	now.seconds = 27;

	// B)
	struct Time end = { 17, 0, 0 };
}

void test_struct_2()
{
	struct Time now = { 15, 45, 0 };

	// printf("Uhrzeit: %02d:%02d:%02d\n", now.hours, now.minutes, now.seconds);

	printTime(now);
}