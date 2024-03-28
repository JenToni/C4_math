#include "s21_math.h"
long double s21_floor(double x) {
  long double answer = (long long int)x;
  if (S21_IS_NAN(x) || x == 0 || x == S21_NEGZERO || S21_IS_INF(x))
    answer = x;
  else {
    answer = answer <= x ? answer : answer - 1;
  }
  return answer;
}