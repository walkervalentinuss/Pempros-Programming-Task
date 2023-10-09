// 12S21012 - Walker Valentinus Simanjuntak
// 12S21055 - Lamria Magdalena Tampubolon

#include <stdio.h>

int main(int _argv, char **_argc)
{
  float f1, f2, f3, f4;
  scanf("%f\n%f\n%f\n%f", &f1, &f2, &f3, &f4);
  float jumlah = f1+f2+f3+f4;
  float rataRata = (f1+f2+f3+f4)/4;
  printf("%.3f\n%.3f", jumlah, rataRata);

  return 0;
}
