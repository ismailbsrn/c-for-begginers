#include <stdio.h>
#include <math.h>

int main()
{
  int x = 5;
  int y = 2;
  float degree, radian;
  const double PI = 3.14159265359;

  printf("%d\n", x + y);
  printf("%d\n", x - y);
  printf("%d\n", x * y);
  printf("%f\n", (float)x / y);
  printf("%d\n", x % y);

  // pre-icrement/dicrement vs post-increment/dicrement
  printf("--------------\n");
  printf("%d\n", x++);
  printf("%d\n", x);
  printf("%d\n", y--);
  printf("%d\n", y);

  /*math.h*/
  degree = 45;
  radian = degree * (PI / 180);
  printf("%lf\n", pow(3, 3));
  printf("%lf\n", sqrt(9));
  printf("%lf\n", cbrt(8));
  printf("%lf\n", fabs(-123));
  printf("%lf\n", tan(radian));
  
  return 0;
}