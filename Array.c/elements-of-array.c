#include <stdio.h>

int main()
{
  int arr[5] = {23,45,56,67,78};
  
   printf("Elements of given array : \n");
  for(int i=0; i<5; i++){
   printf("arr[%d] = %d\n",i,arr[i]);
  }
    return 0;
}
