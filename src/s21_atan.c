#include "s21_math.h"

long double s21_atan(double x) {
  long double answer = 0;
  if (x == S21_INF_POS)
    answer = S21_PI / 2;
  else if (x == S21_INF_NEG)
    answer = -S21_PI / 2;
  else if (x != x)
    answer = x;
  else if (x == 1)
    answer = 0.785398163;
  else if (x == -1)
    answer = -0.785398163;

  // ^- проверки некоторых значений для более быстрого счёта,с видоса в tg

  else {
    int is_in_range = (x > -1 && x < 1);
    x = is_in_range ? x : 1.0 / x;  // если велечина больше
                                    // abs(-+1)переводим

    // дальше сам ряд
  }
  return answer;
}