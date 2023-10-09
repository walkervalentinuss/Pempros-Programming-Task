// 12S21012 - Walker Valentinus Simanjuntak
// 12S21055 - Lamria Magdalena Tampubolon

#include <stdio.h>

int main(int _argc, char **_argv)
{
  int i, j, max, min;
  float avg, sum;
  sum = 0.0;
  avg = 0.0;
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
  for ( i = 0; i < j; i++)
  {
    sum = sum+masukan[i];
  }
  avg = sum/j;
  
  printf("\n%d\n", min);
  printf("%d\n", max);
  printf("%.2f\n", avg);
  
  return 0;
}



















































// int i,j;
//   scanf("%d", &j);
//   int value[j], min_num, max_num;
//   for ( i = 0; i < j; i++)
//   {
//     scanf("%d", &value[i]);
//   }
//   max_num = value[0];
//   for ( i = 1; i < j; i++)
//   {
//     if (max_num < value[i])
//     {
//       max_num = value[i];
//     } else if (min_num > value[i])
//     {
//       min_num = value[i];
//     }
//   }
//   int length = sizeof(value)/sizeof(*value);
//   int sum = 0;

//   for ( i = 0; i < length; i++)
//   {
//     sum += value[i];
//   }
//   float rata_rata = (float)sum / (float)length;
  

//   printf("%d\n%d\n%.2f\n", min_num, max_num, rata_rata);

