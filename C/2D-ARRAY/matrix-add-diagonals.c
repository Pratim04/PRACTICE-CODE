#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
  int a[3][3],i,j,sum=0;
  system("cls");
  printf("Enter number:\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("MATRIX FORM:\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("%d\t ",a[i][j]);
    }
    printf("\n");
  }
  printf("DIAGONAL ELEMENTS:\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      if(i==j)
      {
        printf("%d\n",a[i][j]);
        sum=sum+a[i][j];
      }
    }
  }
  printf("ADDITION OF DIAGONALS: ");
  printf("%d",sum);
  getch();
  return 0;
}