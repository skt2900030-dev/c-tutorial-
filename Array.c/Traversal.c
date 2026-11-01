#include<stdio.h>
int main() {
  int a[] = {12,23,78,67,78,98};
  int n = sizeof(a) / sizeof(a[0]);

printf("\n The Number elements in array : %d\n",n);

for(int i=0; i<n; i++){
   printf("a[%d] = %d\n",i,a[i]);
}
return 0;
}
