// 12S21012 - Walker Valentinus Simanjuntak
// 12S21055 - Lamria Magdalena Tampubolon

#include <stdio.h>
#include <string.h>

//membuat struct mahasiswa1 
struct mahasiswa
{
  char name[50];
  int age;
  float GPA;
}mahasiswa1; 
enum tahun_lahir{duaributiga=18, duaribudua, duaribusatu, duaribu};

int main(int _argv, char **_argc)
{
  enum tahun_lahir tahun;
  for ( tahun = duaributiga; tahun < duaribu; tahun++)
  {
    printf("Umur anda adalah :  %d\n", tahun);
  }

//memberikan nilai ke nama mahasiswa 1
strcpy(mahasiswa1.name, "Lamria Siahaan");

//memberikan nilai ke variabel mahasiwaa yang lain
mahasiswa1.age = 20;
mahasiswa1.GPA = 4.00;

//mengeluarkan data ke monitor
printf("Name: %s\n", mahasiswa1.name);
printf("Age\t: %d\n", mahasiswa1.age);
printf("GPA\t: %.2f", mahasiswa1.GPA);
  

  return 0;
}
