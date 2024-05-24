#include <stdio.h>

int main()
{
    int hour, minute;
    int converter;
    int sum_hour = 0;
    int sum_minute = 0;
    scanf("%d %d", &hour, &minute);
    do {
        sum_hour += hour;
        sum_minute += minute;
        if (sum_minute >= 60)
        {
            converter = sum_minute/60;
            sum_minute = sum_minute - converter*60;
            sum_hour += converter;
        }
        scanf("%d %d", &hour, &minute);
    } while (hour != 0 || minute != 0);
    printf("%dh %dm\n", sum_hour, sum_minute);
}