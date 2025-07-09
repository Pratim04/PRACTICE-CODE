#include <iostream>
using namespace std;

class Vehicle
{
private:
    string model_number; // Vehicle model number
    float price;         // Vehicle price
    int seat_capacity;   // Vehicle seat capacity
    string vehicle_type; // Type of the vehicle (private or public)

public:
    // Constructor to initialize the vehicle's details
    Vehicle(string m_num, float p, int seats, string v_type)
    {
        model_number = m_num;
        price = p;
        seat_capacity = seats;
        vehicle_type = v_type;
    }

    // Function to display the details of the vehicle
    void displayDetails()
    {
        cout << "Model Number: " << model_number << endl;
        cout << "Price: " << price << endl;
        cout << "Seat Capacity: " << seat_capacity << endl;
        cout << "Vehicle Type: " << vehicle_type << endl;
    }
};

int main()
{
    // Create two objects: bus and car
    Vehicle bus("BUS123", 500000.0, 50, "Public");
    Vehicle car("CAR456", 200000.0, 5, "Private");

    // Display details of bus and car
    cout << "Bus Details: " << endl;
    bus.displayDetails();
    cout << endl;

    cout << "Car Details: " << endl;
    car.displayDetails();

    return 0;
}
