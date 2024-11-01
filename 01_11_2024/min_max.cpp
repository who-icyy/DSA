// Finding the Lowest & Largest Number from an Array

#include <iostream>
using namespace std;

int main()
{
    int numbers[10], largest = numbers[0], lowest = numbers[0];  

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the " << i << " number of value : " ;
        cin >> numbers[i];
    }

    for (int i = 0; i < 10; i++)
    {
        largest = (numbers[i] > largest) ? numbers[i] : largest;
        lowest = (numbers[i] < lowest) ? numbers[i] : lowest;
    }

    cout << "Largest Number is : " << largest << " and lowest number is : " << lowest << "\n";
}