#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void reverseVector(vector<int>& nums){
     if (nums.empty()) {
        cout<<"Vector is empty!"<<endl;
        return;
    }
    int first=0;
    int last=nums.size()-1;
    while(first<last){
        swap(nums[first],nums[last]);
        first+=1;
        last-=1;
    }
}

// there is also a built in method for which we need the <algorthm>
void reverseBuiltIn(vector<int>& nums){
    reverse(nums.begin(),nums.end());
}

//funciton for printing the vector
void printVector(vector<int> nums){
    for(int val:nums){
        cout<<val<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> vec1={1,2,3,4,5};
    cout<<"Original Vector is: ";
    printVector(vec1);
    reverseVector(vec1);
    cout<<"the reversed vector is: ";
    printVector(vec1);
    
//  again reversing using built in function to get the original vector
    reverseBuiltIn(vec1);
    cout<<"the vector again reversed is: ";
    printVector(vec1);

   return 0;
}