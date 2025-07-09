#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the marks of the student: ");
    scanf("%d",&a);
    b=a/10;
    switch (b)
    {
        case 9: printf("GRADE: O,OUTSTANDING");
                break;
        case 8: printf("GRADE: E,EXCELLERNT");
                break;        
        case 7: printf("GRADE: A,VERY GOOD");
                break;
        case 6: printf("GRADE: B,GOOD");
                break;
        case 5: printf("GRADE: C,SATISFACTORY");
                break;
        case 4: printf("GRADE: O,STANDARD");
                break;
        default:printf("FAIL");
                break;
    }
    return 0;
}