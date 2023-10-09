// 12S21012 - Walker Valentinus Simanjuntak
// 12S21055 - Lamria Magdalena Tampubolon

#include <stdio.h>

int main(int _argc, char **_argv)
{
  int i, j, max, min;
  scanf("%d", &j);
  int masukan[j];
  for ( i = 0; i < j; i++)
  {
    scanf("%d", &masukan[i]);
  }
  max=masukan[0];
  for ( i = 1; i < j; i++)
  {
    if (max < masukan[i])
    {
      max = masukan[i];
    } else if (min > masukan[i])
    {
      min = masukan[i];
    }
  }
  printf("%d\n", min);
  printf("%d", max);
  
  // for ( i = 0; i < j; i++)
  // {
  //   printf("%d\n", masukan[i]);
  // }
  
  
  return 0;
}













































  
