// 12S21012 - Walker Valentinus Simanjuntak
// 12S21055 - Lamria Magdalena Tampubolon

#include <stdio.h>

  int main(int _argv, char **_argc)
{
  char op;
  int value, result, number;
  scanf("%c", &op);
  if (op == '*')
  {
    value=1;
  } else if (op == '+')
  {
    value=0;
  } else if (op == '-')
  {
    value=0;
  }
  for (int i = 1; i < 5; i++)
  {
    scanf("%i", &number);
    if (number == -1)
    {
      printf("0");
      break;
    }
    if (op == '*')
    {
      result = value*number;
      value = result;
    } else if (op == '+')
    {
      result = value+number;
      value = result;
    } else if (op == '-')
    {
      result = value-number;
      result = -result;
      value = result;
    }
    printf("%i\n", result);
  }
}