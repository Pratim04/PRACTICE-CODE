#include<stdio.h>
void main()
{
	FILE *fp;
	char filename[100];
	printf("Enter the file name for reading: ");
	scanf("%s",filename);
	fp=fopen(filename,"r");
	struct record
    {
		char n[30];
		int age;
	}rec[5];
	int i;
	fread(&rec,sizeof(rec),1,fp);
	for(i=0;i<2;i++)
	{
		printf("%s  %d\n",rec[i].n,rec[i].age);
	}
	printf("File reading successfully");
}