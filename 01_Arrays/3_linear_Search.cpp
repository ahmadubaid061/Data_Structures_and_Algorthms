#include <iostream>
using namespace std;
void linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            cout << "Element found at index: " << i << endl;
            return;
        }
    }
    cout << "Element not found in the array." << endl;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
   // sizeof(arr) means total size of array
   // sizeof(arr[0]) means size of one element of array (for an iteger, it is 4 bytes)
   //so, sizeof(arr) / sizeof(arr[0]) gives the number of elements in the array
    int target = 3;
    linearSearch(arr, size, target);
    // the arr here is the address of the first element of the array, so we can pass it to the function as a pointer
    return 0;
}