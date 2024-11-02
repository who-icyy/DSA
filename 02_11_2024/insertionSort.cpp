#include <iostream>
using namespace std;

void insertionSort(int array[], int len) {
    for (int i = 1; i < len; i++) {
        int key = array[i];
        int j = i - 1;

        // Move elements that are greater than `key` one position ahead
        // of their current position
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key; // Place `key` in its correct position
    }
}

int main() {
    int nums[] = {64, 25, 12, 22, 11};
    int len = sizeof(nums) / sizeof(nums[0]);

    cout << "Original array: ";
    for (int i = 0; i < len; i++) cout << nums[i] << " ";
    cout << endl;

    insertionSort(nums, len);

    cout << "Sorted array: ";
    for (int i = 0; i < len; i++) cout << nums[i] << " ";
    cout << endl;

    return 0;
}
