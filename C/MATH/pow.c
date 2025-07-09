#include<stdio.h>
#include<math.h>
int main()
{
    float a,b;
    printf("Enter the value of a,b:\n");
    scanf("%f%f",&a,&b);

    //a define as a number and b is the power of a
    printf("Result is %f",pow(a,b));
    return 0;
}