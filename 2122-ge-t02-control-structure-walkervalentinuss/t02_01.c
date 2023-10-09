// 12S21012 - Walker Valentinus Simanjuntak
// 12S21055 - Lamria Magdalena Tampubolon

#include <stdio.h>

int main(int _argv, char **_argc)
{
  int kuantitas;
  float harga, diskon, totalSetelahDiskon;
  char tidakDiskon[] = "---";
  scanf("%d\n%f", &kuantitas, &harga);
  if (kuantitas*harga>500000)
  {
    diskon = (kuantitas*harga)*0.15;
    totalSetelahDiskon = kuantitas*harga - diskon;
    printf("%.2f\n%.2f", diskon, totalSetelahDiskon);
  }else if (kuantitas*harga>=100000)
  {
    diskon = (kuantitas*harga)*0.1;
    totalSetelahDiskon = kuantitas*harga - diskon;
    printf("%.2f\n%.2f", diskon, totalSetelahDiskon);
  }else if (kuantitas*harga>50000)
  {
    diskon = (kuantitas*harga)*0.05;
    totalSetelahDiskon = kuantitas*harga - diskon;
    printf("%.2f\n%.2f", diskon, totalSetelahDiskon);
  }else if(kuantitas*harga<50000)
  {
    totalSetelahDiskon = harga*kuantitas;
    printf("%s\n%.2f", tidakDiskon, totalSetelahDiskon);;
  }
  
  return 0;

}


























































































  // float disc, harga, hargadisc, hargafin;
  // int jumlah;
  // char tidakdisc[] = "---";

  // scanf("%d\n%f", &jumlah, &harga);
  // if (jumlah*harga < 50000)
  // {
  //   hargafin = jumlah*harga;
  //   printf("%s\n%.2f\n", tidakdisc, hargafin);
  // } else {
  //   if (jumlah*harga >= 500000)
  //   {
  //     hargadisc = harga*15/100;
  //   } else {
  //     if (jumlah*harga > 100000)
  //     {
  //       hargadisc = harga*10/100;
  //     } else {
  //       hargadisc = harga*5/100;
  //     }
  //   }
  //   disc = jumlah*hargadisc;
  //   hargafin = jumlah*harga-disc;
  //   printf("%.2f\n%.2f\n", disc, hargafin);
  // }
  
