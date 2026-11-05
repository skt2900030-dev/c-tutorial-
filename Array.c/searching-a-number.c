#include<stdio.h>
int main()
{
    int a[5] = {45,67,78,39,29};
    int n;
    int flag=0;

    printf("Enter the number the to search : ");
    scanf("%d",&n); //accepting the number from the user

    printf("\n");
    for(int i=0; i<5; i++)
    {

    if (n==a[i])
        {
            flag=1;
            printf(" PRESENT \n");
            printf("\nTHE NUMBER IS PRESENT AT INDEX PLACE : %d\n",i);
            break;
        }


    }


  return 0;
}
