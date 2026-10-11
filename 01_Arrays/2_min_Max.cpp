#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Minimum value: " << min << endl;
    cout << "Maximum value: " << max << endl;

    return 0;
}