#include <iostream>
using namespace std;

void calculateSalary(string role, float basic, float da, float hra, float ta) {
    float total = basic + da + hra + ta;
    cout << "Basic of " << role << " is: " << basic << endl;
    cout << "DA of " << role << " is: " << da << endl;
    cout << "HRA of " << role << " is: " << hra << endl;
    cout << "TA of " << role << " is: " << ta << endl;
    cout << "Total Salary of " << role << " is: " << total << endl << endl;
}

void calculateSalary(string role, float basic, float da, float hra) {
    float total = basic + da + hra;
    cout << "Basic of " << role << " is: " << basic << endl;
    cout << "DA of " << role << " is: " << da << endl;
    cout << "HRA of " << role << " is: " << hra << endl;
    cout << "Total Salary of " << role << " is: " << total << endl << endl;
}

void calculateSalary(string role, float basic, float medical) {
    float total = basic + medical;
    cout << "Basic of " << role << " is: " << basic << endl;
    cout << "Medical of " << role << " is: " << medical << endl;
    cout << "Total Salary of " << role << " is: " << total << endl << endl;
}

int main() {

    calculateSalary("Manager", 40000.50, 16000.20, 6000, 1000);
    
    calculateSalary("Developer", 30000, 12000, 4500, 5000);

    calculateSalary("Accountant", 20000, 10000, 3000);

    calculateSalary("Group-D", 10000.50, 500);

    return 0;
}