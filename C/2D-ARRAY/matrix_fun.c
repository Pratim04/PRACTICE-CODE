#include<stdio.h>

void mats()
{   int i,j,a[3][3];
    for(i=0;i<3;i++)
	{
		for(j=2;j>=0;j--)
		{
		    scanf("%d",&a[i][j]);
		}
	}  
        printf("Matrix form is:\n");
    for(i=0;i<3;i++)
	{
		for(j=2;j>=0;j--)
		{       
		    printf("%d\t",a[i][j]);
        } 
        printf("\n");
    }
}
void main()
{   
    printf("Enter 1st matrix value:\n");
    mats();
    printf("Enter 2nd matrix value:\n");
    mats();
}