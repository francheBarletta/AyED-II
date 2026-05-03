#ifndef _WEATHER_UTILS_H
#define _WEATHER_UTILS_H

#include "weather_table.h"

int min_temp(WeatherTable a);
/*función que obtenga la menor temperatura mínima histórica registrada en la ciudad de Córdoba
según los datos del arreglo*/

void max_temp(WeatherTable a, int output[YEARS]);
/*“procedimiento” que registre para cada año entre 1980 y 2016 la mayor temperatura máxima
registrada durante ese año*/

void cant_max_rainfall(WeatherTable a, month_t output[YEARS]);
/*Implementar un procedimiento que registre para cada año entre 1980 y 2016 el mes de ese año en
que se registró la mayor cantidad mensual de precipitaciones (campo rainfall)*/

int sum_month_rainfall(WeatherTable a, month_t month, unsigned int year);
/*dado un año y un mes, devuelve la suma de las precipitaciones de todos los días para ese mes de
ese año.*/


#endif