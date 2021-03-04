/* This program may looks like it's 
 * overengineered, well... It probably
 * is, but this isn't a problem. It's
 * purpose is to be an experiment
 * with the stdarg library for variadic
 * functions.
 */
#include <stdio.h>
#include <stdarg.h>
#include <math.h>

typedef struct { 
  double grade, weight;
} weighted_grade;
//TODO: naming is a mess, find better variable names
double weighted(int n, ...)
{
  va_list grades_weights;
  va_start(grades_weights, n);
  double grade_weight_total = 0, weight_total = 0;

  for(int i = 0; i < n; i++)
  {
    weighted_grade weight_grade = va_arg(grades_weights, weighted_grade);
    grade_weight_total += weight_grade.weight * weight_grade.grade;
    weight_total += weight_grade.weight;
  }
  va_end(grades_weights);
  return grade_weight_total / weight_total;
} 

double arithmetic(int n, ...)
{
  va_list grades;
  va_start(grades, n);
  double total = 0;

  for(int i = 0; i < n; i++)
  {
    double grade = va_arg(grades, double);
    total += grade;
  }
  va_end(grades);
  return total / n;
}

double geometric(double n, ...)
{
  va_list grades;
  va_start(grades, n);
  double total = 0;

  for(int i = 0; i < n; i++)
  {
    double grade = va_arg(grades, double);
    int test = (int) total;

    if(test == 0) {
      total = grade;
    } else {
      total *= grade;
    }
  }
  va_end(grades);
  return pow(total, 1 / n);
}

double harmonic(int n, ...)
{
  va_list grades;
  va_start(grades, n);
  double total = 0;

  for(int i = 0; i < n; i++)
  {
    double grade = va_arg(grades, double);
    total += 1 / grade;
  }
  va_end(grades);
  double cast_n = (double) n;
  return 1 / (total / cast_n);
}

int main()
{
  double arithmetic_mean, weighted_mean, geometric_mean, harmonic_mean;
  weighted_grade g1 = {10,1}, g2 = {11,2}, g3 = {12,3}, g4 = {13, 4};

  weighted_mean = weighted(4, g1, g2, g3, g4);
  printf("Weighted: %.4f\n", weighted_mean);

  arithmetic_mean = arithmetic(4, 1.2, 2.5, 3.2, 4.6);
  printf("Arithmetic: %.4f\n", arithmetic_mean);

  geometric_mean = geometric(4, 1.2, 2.5, 3.2, 40.6);
  printf("Geometric: %.4f\n", geometric_mean);
 
  harmonic_mean = harmonic(3, 2.0, 6.0, 8.0);
  printf("Harmonic: %.4f\n", harmonic_mean);

  return 0;
}

