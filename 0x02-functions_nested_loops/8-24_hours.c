#include <stdio.h>

/**
 * jack_bauer - print every minutes of the day
 * hour: the number Starting from 00:00 to 23:59
 * minute: the number starting from 00:00 t0 < 60
 * Return: no return value
 */
void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			printf("%02d:%02d\n", hour, minute);
		}
	}
}
