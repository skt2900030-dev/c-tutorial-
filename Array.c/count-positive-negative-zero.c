//counting the positive, negative, and zero elements

#include<stdio.h>
int main()
{
  int arr[8] = {5,-7,8,-9,0,-3,54,9};
  int pos = 0, neg = 0, zero = 0;

  for (int i = 0; i < 8; i++)
    {
      if (arr[i] > 0){
      pos++;
      } else if (arr[i] < 0) {
        neg++;
      } else{
        zero;
      }
    }
printf("Positive = %d\n",pos);
printf("Negative = %d\n",neg);
printf("Zero     = %d\n",zero);
  
  return 0;
}
