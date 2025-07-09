#include <stdio.h>
int main()
{
  char str[500];
  char ch;
  int i;

  printf("Enter a Word/Sentence: ");
  scanf("%[^\n]s", str);
  getchar();

  printf("Enter the Occurrence: ");
  ch=getchar();
  printf("Result is: ");

  for(i=0; str[i]!='\0'; i++)
  {
    if(str[i]!=ch)
    printf("%c",str[i]);
  }
    return 0;

}