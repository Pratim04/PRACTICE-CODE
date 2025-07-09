#include<stdio.h>
void count(int x , int y, int *odd, int *even)
{
    *even = 0;
    *odd = 0;
    
    for(int i = x ; i <= y ; i++)
    {
        if(i%2==0)
        (*even)++;
        else
        (*odd)++;
    }
}
void main()
{
    int start,end,even,odd;
    printf("Enter the first range :");
    scanf("%d",&start);
    printf("Enter the second range :");
    scanf("%d",&end);
    
    count(start,end,&even,&odd);
    
    printf("Even number : %d",even);
    printf("\nodd number : %d",odd);
}