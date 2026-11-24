//using double as data types in C

#include<stdio.h>
int main()
{
  float price = 23.99;
  double pie = 3.14159265358979;
  
  printf("price = %.2lf\n",price);
  //here double can store numbers of digits after decimal compared to float ;
  //So, the value of pie in input is same to the output;
  printf("pie = %.14lf\n",pie);
  
  return 0;
}
