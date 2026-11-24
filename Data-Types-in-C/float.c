//using float as a DATA TYPES in C;

#include<stdio.h>
int main()
{
  float price = 23.99;
  float pie = 3.14159265358979;
  
  printf("price = %.2lf\n",price);
  //here float can reliably store 6-7 significant digit;
  //So, the value of pie in input is differnrt from the output;
  printf("pie = %.10lf\n",pie);
  
  return 0;
}
