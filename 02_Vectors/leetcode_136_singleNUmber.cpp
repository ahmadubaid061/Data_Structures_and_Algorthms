//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
//You must implement a solution with a linear runtime complexity and use only constant extra space.
//this means we cannot run nested loops and we cannot use any extra data structures like hashmaps or sets. We can only use a few variables to store our results.
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int val : nums){
            ans=ans^val; //XOR operation is used to find the single number. The idea is that when we XOR two same numbers, the result is 0. So, when we XOR all the numbers in the array, the duplicate numbers will cancel each other out and we will be left with the single number.
        }
        return ans;
    }
};
int main(){
    Solution sol;
    vector<int> nums = {4,1,2,1,2};
    cout << "The single number is: " << sol.singleNumber(nums) << endl; // Output: 4
    //testing for array with a number that is 5 times
    vector<int> nums2 = {3,3,5,5,5,5,5,6}; //this will not return the expected output because our algorithm is for array with each numebr twice exept one 
    //that means we cannot have a number appear more than 2 times
    // we must have a number that appears only one time
    // we cannot have two unique numbers in an array
    cout << "The single number is: " << sol.singleNumber(nums2) << endl; // Output: 6
    return 0;
}