#include <iostream>
using namespace std;

class factorial
{
private:
    int num, i, mul;

public:
    void input()
    {
        cout << "Enter a number: ";
        cin >> num;
    }
    void cal()
    {
        mul = 1;
        for (i = 1; i <= num; i++)
        {
            mul = mul * i;
        }
    }
    void display()
    {
        cout << "Factorial of " << num << " is " << mul << endl;
    }
};
int main()
{
    factorial f;
    f.input();
    f.cal();
    f.display();
}