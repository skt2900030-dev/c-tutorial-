//using float as a DATA TYPES in C;

#include<stdio.h>
int main()
{
  float price = 23.99;
  float pie = 3.14159265358979;
  
  //float in C is denoted as "%f" ;
  printf("price = %.2f\n",price);
  //here float can reliably store 6-7 significant digit;
  //So, the value of pie in input is differnrt from the output;
  printf("pie = %.10f\n",pie);
  
  return 0;
}
