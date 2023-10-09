// 12S21012 - Walker V. Simanjuntak
// 12S21055 - Lamria Magdalena Tampubolon

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./libs/dorm.h"
#include "./libs/student.h"
#include "./libs/gender.h"

int main(int _argc, char **_argv)
{
  char input[75];
  int p = 0;
  int sizee = 0;
  struct student_t *mhs = malloc(sizee * sizeof(struct student_t));
  char *token;

  while (1 == 1)
  {
    fgets(input, sizeof input, stdin);
    input[strlen(input) - 1] = '\0';

    if (strcmp(input, "---") != 0)
    {
      input[strlen(input) - 1] = '\0';
    }

    token = strtok(input, "#");
    if (strcmp(token, "---") == 0)
    {
      break;
    }
    else if (strcmp(token, "student-add") == 0)
    {
      sizee++;
      mhs = realloc(mhs, sizee * sizeof(struct student_t));
      mhs[p] = create_student(input);
      p++;
    }
    else if (strcmp(token, "student-print-all") == 0)
    {
      for (int m = 0; m < p; m++)
      {
        print_student(mhs[m]);
      }
    }
  }
  free(mhs);
  
  return 0;
}