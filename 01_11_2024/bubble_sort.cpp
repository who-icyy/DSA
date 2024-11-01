#include <iostream>
using namespace std;

void bubbleSort(int array[], int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]); // Swap the values for [j] and [j+1] indexes
            }
        }
    }
}

int main() {
    int nums[10] = {64, 34, 25, 12, 22, 11, 90, 45, 2, 67};
    int len = sizeof(nums) / sizeof(nums[0]); // Calculate the Size of array

    cout << "Original array: ";
    for (int i = 0; i < len; i++) cout << nums[i] << " ";
    cout << endl;

    bubbleSort(nums, len);

    cout << "Sorted array: ";
    for (int i = 0; i < len; i++) cout << nums[i] << " ";
    cout << endl;

    return 0;
}
