#include <stdio.h>

int main()
{
  int arr[20],n;
  
  printf("Enter the number of elements in array : %d",n);
  scanf("%d",&n);
  
   for(int i=0; i<20; i++)
   {
    printf("Enter the element at position %d : ",i);   
     scanf ("%d",&arr[i]);
   }
    return 0;
}
