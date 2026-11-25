#include <stdio.h>

int main()
{
  int arr[20],n,sum=0;
  float average;
  
  printf("Enter the number of elements in array : %d",n);
  scanf("%d",&n);
  
   for(int i=0; i<n; i++)
   {
    printf("Enter the element at position %d : ",i);   
     scanf ("%d",&arr[i]);
     sum = arr[i] + sum;
   }
   
   
   printf("Sum      =  %d\n",sum);
   average = (float) sum/n;
   printf("Average  =  %.2f\n",average);
   
    return 0;
}
