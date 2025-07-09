//Incomplete one//
#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char filename[100],get,ch;
	printf("Enter the file name for reading: ");
	scanf("%s",filename);
	fp=fopen(filename,"r");
    if (fp==NULL)
    {
        printf("Empty file");
    }
	else
	{	
		while (1) 
		{	ch=fgetc(fp);
			if (ch!=EOF)
			{
				printf("%s",ch);	
			}
	    }
	}
}