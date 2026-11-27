

#include<stdio.h>
int main()
{
  int n,pos = 0,neg = 0,zero = 0;
 
  scanf("%d",&n);
  int arr[n];
  for(int i=0; i<n; i++)
    {
      scanf("%d",&arr[i]);
    }
  
  
  for(int i=0; i<n; i++)
    {
      if(arr[i]>0)
      {
        pos++;
      }
      else if(arr[i]<0)
      {
        neg++;
      }
      else{
        zero++;
      }
    }
    printf("POSITIVE = %d \n",pos);
    printf("NEGATIVE = %d\n",neg);
    printf("ZERO = %d\n",zero);
  return 0;
}
