/*
  @file weather.c
  @brief Implements weather mesuarement structure and methods
*/
#include "weather.h"
#include <stdlib.h>

Weather weather_from_file(FILE *file)
{
  Weather weather;

  int temp_avg, temp_max, temp_min;
  unsigned int pressure, moisture, rainfall;
  int res = fscanf(file, " %d %d %d %u %u %u ", &temp_avg, &temp_max, &temp_min, &pressure, &moisture, &rainfall);

  if (res < 6)
  {
    fprintf(stderr, "Invalid table.\n");
    exit(EXIT_FAILURE);
  }

  weather._max_temp = temp_max;
  weather._min_temp = temp_min;
  weather._pressure = pressure;
  weather._moisture = moisture;
  weather._rainfall = rainfall;
  weather._average_temp = temp_avg;

  return weather;
}

void weather_to_file(FILE *file, Weather weather)
{
  fprintf(file, "%d %d %d %u %u %u", weather._average_temp, weather._max_temp,
          weather._min_temp, weather._pressure, weather._moisture,
          weather._rainfall);
}

/*
gcc -Wall -Wextra -pedantic -std=c99 -c weather_table.c weather.c main.c
gcc -Wall -Wextra -pedantic -std=c99 weather_table.o weather.o main.o -o weather
./weather ../input/weather_cordoba.in > weather_cordoba.out

diff ../input/weather_cordoba.in weather_cordoba.out
*/