#include <iostream>

class SortedArray {
private:
    int arr[20]; // Integer array arr with a fixed size of 20
    int size; // Integer size to keep track of the current number of elements.

public:
    SortedArray() : size(0) {}

    bool insert(int value) {
        // Terminate if full
        if (size >= 20) {
            std::cout << "Array is full. Cannot insert new element." << std::endl;
            return false;
        }

        // Find the correct position to insert the new value
        int pos = 0;
        while (pos < size && arr[pos] < value) {
            ++pos;
        }

        // Shift elements to the right to make space for the new element
        for (int i = size; i > pos; --i) {
            arr[i] = arr[i - 1];
        }

        // Insert the new value
        arr[pos] = value;
        ++size;
        return true;
    }

    void printArray() const {
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};