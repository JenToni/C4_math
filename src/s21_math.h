
#include <float.h>
#include <limits.h>
#include <stdio.h>
#define S21_INF __builtin_huge_valf()
#define S21_NAN __builtin_nan("")
#define S21_IS_NAN(x) (x != x)
#define S21_IS_INF(x) (x == S21_INF_NEG || x == S21_INF_POS)
#define S21_NEGZERO -0.0
#define S21_INF_POS +1.0 / 0.0
#define S21_INF_NEG -1.0 / 0.0
#define TEST_EPS 1e-6l
#define S21_EPS 1e-25
#define S21_PI 3.14159265358979323846L

int s21_abs(int x);
// long double acos(double x) вычисляет арккосинус
// long double asin(double x) вычисляет арксинус
// long double atan(double x) вычисляет арктангенс
long double s21_ceil(double x);
long double s21_cos(double x);
// long double exp(double x) возвращает значение e,возведенное в заданную
// степень
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
// long double log(double x) вычисляет натуральный логарифм
// long double pow(double base, double exp) возводит число в заданную степень
long double s21_sin(double x);
// long double sqrt(double x) вычисляет квадратный корень
long double s21_tan(double x);