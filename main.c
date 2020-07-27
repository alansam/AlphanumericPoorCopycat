
#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846264338327950288
#endif

int main(void) {

  printf("%zu %zu %zu\n",
          sizeof(float),
          sizeof(double),
          sizeof(long double));
//return 0;

  float a, b, c, sum;
  a = 10.049875;
  b = 14.560220;
  c = 6.403124;
  sum = a + b + c;
  printf("%.15f %.15f %.15f\n", sum, a + b, a + c);
  sum = a + c + b;
  printf("%.15f %.15f %.15f\n", sum, a + b, a + c);
  a = 10.049875f;
  b = 14.560220f;
  c = 6.403124f;
  sum = a + b + c;
  printf("%.15f %.15f %.15f\n", sum, a + b, a + c);
  sum = a + c + b;
  printf("%.15f %.15f %.15f\n", sum, a + b, a + c);

  putchar('\n');
  double ad, bd, cd, sumd;
  ad = 10.049875;
  bd = 14.560220;
  cd = 6.403124;
  sumd = ad + bd + cd;
  printf("%.15lf %.15lf %.15lf\n", sumd, ad + bd, ad + cd);
  sumd = ad + cd + bd;
  printf("%.15lf %.15lf %.15lf\n", sumd, ad + bd, ad + cd);

//return 0;

  float x, rad, ak, pw;

printf("%d\n", 7 * 180);
printf("%f\n", 22 / (7. * 180.));
printf("%lf\n", M_PI / 180.);
  printf("enter x: ");
  scanf("%f", &x);

  printf("x %f\n", x);
  rad = (x * 22.) / 1260.;
  printf("rad %f\n", rad);

  ak = sin(rad);
  pw = pow(ak, 3);

  printf("\nang=%.16f\npow=%.16f\n\n", ak, pw);

  rad = x * M_PI / 180.;
  printf("rad %f\n", rad);

  ak = sin(rad);
  pw = pow(ak, 3);

  printf("\nang=%.16f\npow=%.16f\n\n", ak, pw);

  return 0;
}
