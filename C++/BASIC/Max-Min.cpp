#include <iostream>
using namespace std;

class ArrayAnalyzer
{
private:
    int arr[100];
    int size;

public:
    void inputArray()
    {
        cout << "Enter the size of the array (max 100): ";
        cin >> size;

        cout << "Enter the elements of the array: ";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }

    int findMax()
    {
        int maxVal = arr[0];
        for (int i = 1; i < size; i++)
        {
            if (arr[i] > maxVal)
            {
                maxVal = arr[i];
            }
        }
        return maxVal;
    }

    int findMin()
    {
        int minVal = arr[0];
        for (int i = 1; i < size; i++)
        {
            if (arr[i] < minVal)
            {
                minVal = arr[i];
            }
        }
        return minVal;
    }

    void displayResults()
    {
        cout << "Maximum value in the array: " << findMax() << endl;
        cout << "Minimum value in the array: " << findMin() << endl;
    }
};

int main()
{
    ArrayAnalyzer analyzer;

    analyzer.inputArray();

    analyzer.displayResults();

    return 0;
}
