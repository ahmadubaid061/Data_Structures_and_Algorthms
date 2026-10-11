#include <iostream>
using namespace std;
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move towards the middle
        start++;
        end--;
    }
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int start = 0;
    int end = 4;

    reverseArray(arr, 5); //the original array is modified in the function, so we don't need to return anything

    // Print the reversed array
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}