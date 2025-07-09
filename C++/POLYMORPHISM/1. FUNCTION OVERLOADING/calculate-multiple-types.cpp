#include <iostream>
using namespace std;

void calculate(int a, int b, int c) {
    int sum = a + b + c;
    double avg = sum / 3.0;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;
}

void calculate(float a, float b, float c) {
    float sum = a + b + c;
    float avg = sum / 3;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;
}

void calculate(int a, int b, float c) {
    float sum = a + b + c;
    float avg = sum / 3;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;
}

void calculate(int a, float b, int c) {
    float sum = a + b + c;
    float avg = sum / 3;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;
}

int main() {

    cout << "Test case 1:" << endl;
    calculate(3, 4, 8);

    cout << "\nTest case 2:" << endl;
    calculate(6, 4, 5.3f);

    cout << "\nTest case 3:" << endl;
    calculate(3.2f, 4.5f, 8.1f);

    cout << "\nTest case 4:" << endl;
    calculate(2, 3.5f, 4);

    return 0;
}