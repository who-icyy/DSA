// Selection Sort using C++

#include <iostream>
using namespace std;

void selectionSort(int array[], int len) {
    for (int i = 0; i < len - 1; i++) {
        // Find the minimum element in the unsorted portion of the array
        int minIndex = i;
        for (int j = i + 1; j < len; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element of the unsorted portion
        swap(array[i], array[minIndex]);
    }
}

int main() {
    int nums[] = {64, 25, 12, 22, 11};
    int len = sizeof(nums) / sizeof(nums[0]);

    cout << "Original array: ";
    for (int i = 0; i < len; i++) cout << nums[i] << " ";
    cout << endl;

    selectionSort(nums, len);

    cout << "Sorted array: ";
    for (int i = 0; i < len; i++) cout << nums[i] << " ";
    cout << endl;

    return 0;
}
