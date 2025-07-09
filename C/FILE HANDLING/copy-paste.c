#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *file1 ,*file2 ;
    char ch;
    file1=fopen("Pratim.txt","r");
    file2=fopen("sagnik.txt","w");
    if (file1==NULL || file2==NULL)
    {
	printf("Unable to open");
	exit(1);
    }
    while (1)
    {
        ch=fgetc(file1);
        if (ch==EOF)
        break;
        fputc(ch,file2);
    }
    fclose(file1);
    fclose(file2);
        return 0;
}