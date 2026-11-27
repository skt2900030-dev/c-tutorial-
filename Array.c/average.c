//sum andaverage in Cprogram;

#include <stdio.h>

int main()
{
    int n;
    int sum=0;
    float average;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    average = (float)sum/n;
    printf("%.2f",average);
    return 0;
}
