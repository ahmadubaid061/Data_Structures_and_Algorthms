#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Elements of the vector: ";
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;

    // Using forEach loop to iterate over the vector
    cout << "Elements of the vector using forEach loop: ";
    for(int element : vec){           //same as for element in vec
        cout << element << " ";
    }
    cout << endl;
}