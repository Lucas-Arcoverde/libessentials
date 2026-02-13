/*
 * libessentials
 * Copyright (c) 2026 Lucas Arcoverde de Melo
 * Licensed under the MIT License
 */

#ifndef MATH_UTILS_H
#define MATH_UTILS_H

double ess_sum(double first_number, double second_number);
double ess_sub(double first_number, double second_number);
double ess_mul(double first_number, double second_number);
double ess_div(double first_number, double second_number);

int ess_sum_int(int first_number, int second_number);
int ess_sub_int(int first_number, int second_number);
int ess_mul_int(int first_number, int second_number);
int ess_div_int(int first_number, int second_number);

long ess_sum_long(long first_number, long second_number);
long ess_sub_long(long first_number, long second_number);
long ess_mul_long(long first_number, long second_number);
long ess_div_long(long first_number, long second_number);

float ess_sum_float(float first_number, float second_number);
float ess_sub_float(float first_number, float second_number);
float ess_mul_float(float first_number, float second_number);
float ess_div_float(float first_number, float second_number);

#endif //MATH_UTILS_H

