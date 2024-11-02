#include <iostream>
using namespace std;

// Partition function to place pivot at the correct position and sort elements around it
int partition(int array[], int low, int high) {
    int pivot = array[high]; // Choose the last element as the pivot
    int i = low - 1;         // Index of the smaller element

    for (int j = low; j < high; j++) {
        // If current element is smaller than or equal to pivot
        if (array[j] <= pivot) {
            i++; // Increment the index of the smaller element
            swap(array[i], array[j]);
        }
    }
    swap(array[i + 1], array[high]); // Place pivot in the correct position
    return i + 1; // Return the pivot's position
}

// Quick Sort function
void quickSort(int array[], int low, int high) {
    if (low < high) {
        // Partition the array and get the pivot position
        int pi = partition(array, low, high);

        // Recursively sort elements before and after the pivot
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

int main() {
    int nums[] = {64, 25, 12, 22, 11};
    int len = sizeof(nums) / sizeof(nums[0]);

    cout << "Original array: ";
    for (int i = 0; i < len; i++) cout << nums[i] << " ";
    cout << endl;

    quickSort(nums, 0, len - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < len; i++) cout << nums[i] << " ";
    cout << endl;

    return 0;
}
