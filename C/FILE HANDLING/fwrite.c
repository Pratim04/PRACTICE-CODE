#include<stdio.h>
//#include<stdlib.h>
void main()
{
	FILE *fp;
	char a[100];
	printf("Enter a file name: ");
	scanf("%s",a);
	fp=fopen(a,"w");
	struct record
    {
		char n[30];
		int age;
	}rec[5];
	int i;
	for(i=0;i<2;i++)
	{
		printf("enter name :");
		scanf("%s",rec[i].n);
		printf("enter age :");
		scanf("%d",&rec[i].age);
	}
	fwrite(&rec,sizeof(rec),1,fp);
	printf("File written successfully");
}