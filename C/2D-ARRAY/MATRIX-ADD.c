#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("Enter the 9 values of Matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=2;j>=0;j--)
		{
			scanf("%d",&a[i][j]);
		}
	}
    printf("Enter values for 2nd matrix:\n");
    for(i=0;i<3;i++)
	{
		for(j=2;j>=0;j--)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("1ST Matrix Form:\n");
	for(i=0;i<3;i++)
	{
		for(j=2;j>=0;j--)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
    printf("2ND Matrix from:\n");
    for(i=0;i<3;i++)
	{
		for(j=2;j>=0;j--)
		{
			printf("%d\t",b[i][j]);
		}
    	printf("\n");
	}
    printf("ADDITION\n");
    for(i=0;i<3;i++)
	{
		for(j=2;j>=0;j--)
		{
			c[i][j]=a[i][j]+b[i][j];	 
		}
    }
    for(i=0;i<3;i++)
	{
		for(j=2;j>=0;j--)
		{
			printf("%d\t",c[i][j]);	 
		}
        printf("\n");
    }
    return 0;
}