#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    vector<int> bubbleSort(vector<int> nums){ // lets see what happens withot &, my bet is no change cause duplicate values are being swapped. Probably.

        //okay, so no change in x (the input vector), but we make a copy of x, push it intocnums, sort it, return it, store it in bub, and then print the values of bub. so if you print x, no change. good since we want to try/test for all different sorting techniques, which we cant tell if it is sorted or not if we only give a sorted input!

        // if you want a change in x, an sort it, write: vector<int> bubbleSort(vector<int> &nums){} or bubbleSort(vector<int>& nums){}, the space doesnt matter, apparently
        
        int n = nums.size();
        for(int i = 0; i < n-1; i++){
            for(int j = 0; j < n-i-1; j++){
                if(nums[j] < nums[j+1]) swap(nums[j], nums[j+1]);
            }
        }
        return nums;
    }
};

int main(){
    vector<int> x = {5,3,4,1,2};
    solution obj;
    vector<int> bub = obj.bubbleSort(x);

    for(auto it: bub){
        cout << it << " ";
    }

}