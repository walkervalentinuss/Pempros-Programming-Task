// 12S21012 - Walker Valentinus Simanjuntak

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int _argc, char **_argv)
{
  int satu, dua, pengisi;
  char teks[1000], texx[1000];
  fgets(texx, sizeof texx, stdin);
  int c=0;
  int banyakloop=strlen(texx)-1;

  for (satu=0; satu<=banyakloop-1; satu++)
  {
  teks[satu-c]=texx[satu];
  satu++;
  c++;
  }

  int totalloop=strlen(teks);

  for(satu=0; satu<totalloop; satu++) //loop satu
  {
    for(dua=totalloop; dua>satu; dua--) //loop dua
    {
    if(teks[dua-1]>teks[dua])
      {
      pengisi=teks[dua-1];
      teks[dua-1] = teks[dua];
      teks[dua] = pengisi;
      }
    }
  }

  for(satu=totalloop; satu>=1; satu--)
  {
    if(satu==1)
    {
      printf("%c", teks[satu]);
    }
    else
    {
      printf("%c,", teks[satu]);
    }
    
  }
  
  return 0;
}
