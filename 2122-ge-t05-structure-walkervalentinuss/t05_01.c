// 12S21012 - Walker Valentinus Simanjuntak
// 12S21055 - Lamria Magdalena Tampubolon

#include <stdio.h>
#include <string.h>

enum jeniskelamin_t
{
  lp = 0,
  pr = 0
};

struct anggota_t
{
  char cowo[200];
  char cewe[200];
  enum jeniskelamin_t jeniskelamin;
};

int main(int _argv, char **_argc)
{
  char masuk[200];
  int panjang, belakang;
  int pria=0;
  int wanita=0;

  while (1==1)
  {
    fgets(masuk, sizeof masuk, stdin);
    if (masuk[0]=='-' && masuk[1]=='-' && masuk[2]=='-')
    {
      break;
    }
    else if (masuk[0]=='r' && masuk[1]=='e' && masuk[2]=='g')
    {}
    else
    {
      panjang=strlen(masuk)-3;
      belakang = (int)(strrchr(masuk, '|') - masuk);
      if (panjang-belakang==4)
      {
        pria++;
      }
      else if(panjang-belakang==6)
      {
        wanita++;
      }
    }
  }

  printf("%i|%i\n",pria,wanita);
  
  return 0;
  
}