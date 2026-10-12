#include <iostream>
#include <vector>
using namespace std;
void printVector(const vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}
int main(){
    vector<int> vec1 = {1, 2, 3, 4, 5};
    // adding elements to vector
    vec1.push_back(6); // adding 6 at the end of the vector
    printVector(vec1);
    vec1.insert(vec1.begin() + 2, 7); // adding 7 at index 2
    printVector(vec1);
    vec1.erase(vec1.begin() + 3); // removing element at index 3
    printVector(vec1);
    vec1.clear(); // removing all elements from the vector
    printVector(vec1);

    vector<int> vec2 = {1, 2, 3, 4, 5};
     cout<< "Size of vec2: " << vec2.size() << endl; // printing size of vector
    cout<< "Capacity of vec2: " << vec2.capacity() << endl; //
   cout<<"vector first element: " << vec2.front() << endl; // printing first element of vector
   cout<<"vector last element: " << vec2.back() << endl; // printing last
}