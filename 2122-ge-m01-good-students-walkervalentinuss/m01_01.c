// 12S21012 - Walker Valentinus Simanjuntak
// 12S21055 - Lamria Magdalena Tampubolon

#include <stdio.h>
#include <string.h>

struct mahasiswa_t
{
  char nim[200];
  char nama[200];
  char gpa[200];
};

struct mahasiswa_t create_course(){
  struct mahasiswa_t mhs;
  strcpy(mhs.nim, "");
  strcpy(mhs.nama, "");
  strcpy(mhs.gpa, "");

  return mhs;
}

int main(int _argc, char **_argv)
{

  char masuk[200];
  struct mahasiswa_t mhs[200];
  int i = 0;
  char *tunjuk;
  char *temp;

  do
  {
    fgets(masuk, sizeof masuk, stdin);
    temp = strtok(masuk, "#");
    if (masuk[0] == '-' && masuk[1] == '-' && masuk[2] == '-') // ---
    {
      break; //perulangan akan berhenti
    }
    else if (strcmp(temp, "student-add") == 0)
    {
      temp = strtok(NULL, "#"); 
      strcpy(mhs[i].nim, temp); 

      temp = strtok(NULL, "#");
      strcpy(mhs[i].nama, temp);

      temp = strtok(NULL, "#");
      strcpy(mhs[i].gpa, temp);

      ++i;
    }
    else if (masuk[12] == '-' && masuk[13] == 'a' && masuk[14] == 'l') //students-show-all
    {
      for (int j = 0; j < i; ++j)
      {
        printf("%s|%s|%s", mhs[j].nim, mhs[j].nama, mhs[j].gpa);
      }
    }
  } while (10 == 10);
  
  return 0;
}
