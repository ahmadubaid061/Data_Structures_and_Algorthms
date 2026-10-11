#include <iostream>
using namespace std;
void findUniqueValue(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        bool isUnique = true;
        for (int j = i+1; j < size; j++) {
            if (arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << "Unique value found: " << arr[i] << endl;
            return;
        }
    }
    cout << "No unique value found in the array." << endl;
}
int main(){
    int arr[] = {1, 2, 3, 4, 1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    findUniqueValue(arr, size);
    return 0;
}