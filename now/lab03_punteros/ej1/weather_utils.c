#include <stdio.h>
#include <limits.h>

#include "weather_utils.h"

int min_temp(WeatherTable a)
{
    int min = INT_MAX;
    for (unsigned int year = 0; year < YEARS; year++)
    {
        for (month_t month = 0; month <= december; month++)
        {
            for (unsigned int day = 0; day < DAYS; day++)
            {
                if (a[year][month][day]._min_temp < min)
                {
                    min = a[year][month][day]._min_temp;
                }
            }
        }
    }
    return min;
}

void max_temp(WeatherTable a, int output[YEARS])
{
    for (unsigned int year = 0; year < YEARS; year++)
    {
        int max = INT_MIN;
        for (month_t month = 0; month <= december; month++)
        {
            for (unsigned int day = 0; day < DAYS; day++)
            {
                if (a[year][month][day]._max_temp > max)
                {
                    max = a[year][month][day]._max_temp;
                }
            }
        }
        output[year] = max;
    }
}

int sum_month_rainfall(WeatherTable a, month_t month, unsigned int year)
{
    int sum = 0;
    for (unsigned int day = 0; day < DAYS; day++)
    {
        sum = sum + a[year][month][day]._rainfall;
    }
    return sum;
}

void cant_max_rainfall(WeatherTable a, month_t output[YEARS])
{
    for (unsigned int year = 0; year < YEARS; year++)
    {
        int max_rainfall = INT_MIN;
        month_t max_month = january;
        for (month_t month = 0; month <= december; month++)
        {
            int rainfall_month = sum_month_rainfall(a, month, year);
            if (rainfall_month > max_rainfall)
            {
                max_rainfall = rainfall_month;
                max_month = month;
            }
        }
        output[year] = max_month;
    }
}
