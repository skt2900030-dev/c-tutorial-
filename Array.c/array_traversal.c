#include<stdio.h>
int main() {

  int a[5] = {12,34,45,56,67};                //every value is given
  int b[5] = {13,34};                         //only two values are given so rest becomes 0
  int c[] = {3,6,7};                          //size = no. of elements in it
  int d[5] = {0};                             // all five elements are zero

printf("\na : ");
for(int i=0;i<5;i++){
   printf("%d ", a[i]);

}
printf("\nb : ");
for (int i=0;i<5;i++){
    printf("%d ", b[i]);
}
printf("\nc : ");
for (int i=0;i<5;i++){
    printf("%d ", c[i]);
}
printf("\nd : ");
for(int i=0;i<5;i++){
    printf("%d ",d[i]);
}
return 0;
}
