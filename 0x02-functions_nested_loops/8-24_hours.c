#include "main.h"
#define MINUTE_MAX 60
#define HOUR_MAX 24

/**
 * jack_bauer - prints every minute of Jack Bauer's day starting from 00:00 to 23:59
 * Description: prints every minute of Jack Bauer's day starting from 00:00 to 23:59 to screen.
 */

void jack_bauer(void)
{
int minute;
int hour;
for (hour = 0; hour < HOUR_MAX; hour++)
{
for (minute=0; minute < MINUTE_MAX; minute++)
{
if (minute < 10 && hour < 10)
{
_putchar('0');
_putchar(minute);
_putchar(':');
_putchar('0');
_putchar(hour);
_putchar('\n');
}
else if (minute > 10 && hour < 10)
{
_putchar(minute);
_putchar(':');
_putchar('0');
_putchar(hour);
_putchar('\n');
}
else
{
_putchar('0');
_putchar(minute);
_putchar(':');
_putchar(hour);
_putchar('\n');
}
}
}
}