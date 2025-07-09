#include <stdio.h>
int calculateArea()
{
    int side;
    printf("Enter the side length of the square: ");
    scanf("%d", &side);
    return side * side; 
}
int main() 
{
    int area = calculateArea(); 
    printf("The area of the square is: %d\n", area);
    return 0;
}