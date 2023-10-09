// 12S21012 - Walker Valentinus Simanjuntak
// 12S21055 - Lamria Magdalena Tampubolon

#include <stdio.h>

int main(int _argv, char **_argc)
{
  int x,y,z;
  int hasil1, hasil2;

  scanf("%d\n%d\n%d", &x, &y, &z);
  hasil1 = x>>y;
  hasil2 = z == hasil1;
  printf("%d\n%d", hasil1, hasil2);

  return 0;
}
