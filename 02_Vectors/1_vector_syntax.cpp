#include <iostream>
#include <vector>
using namespace std;
int main(){
    //creating vector
    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<int> vec2(5, 0); //vector of size 5 with all elements initialized to 0
    vector<int> vec3; //empty vector
    //adding elements to vector
    vec3.push_back(1);
    vec3.push_back(2);
    vec3.insert(vec3.begin(), 3); //this will add 3 at the beginning of the vector
    //printing elements of vector
    cout << "Elements of vec1: ";
    for(int i = 0; i < vec1.size(); i++){
        cout << vec1[i] << " ";
    }
    cout << endl;
    cout << "Elements of vec2: ";
    for(int i = 0; i < vec2.size(); i++){
        cout << vec2[i] << " ";
    }
    cout << endl;
    cout << "Elements of vec3: ";
    for(int i = 0; i < vec3.size(); i++){
        cout << vec3[i] << " ";
    }

    
    cout << endl;

}