#include<stdio.h>
void swap(float *x , float *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}
int main()
{
    float a,b;
    printf("Enetr 2 values : ");
    scanf("%f%f",&a,&b);
    printf("Before swapping a = %f , b = %f",a,b);
    swap(&a,&b);
    printf("\nAfter swapping a = %f , b = %f",a,b);
    return 0;
}