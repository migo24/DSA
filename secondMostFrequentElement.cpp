#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
        unordered_map<int, int> hash;
        for(int i = 0; i < nums.size(); i++){
            hash[nums[i]]++;
        }

        int max = 0;
        int s_max = 0;
        int el_2 = -1;

        for(auto it: hash){
            int freq = it.second;
            int el = it.first;

            if(freq > max) max = freq;
        }

        for(auto it: hash){
            int el = it.first;
            int freq = it.second;

            if(freq < max){
                if(freq > s_max){
                    s_max = freq;
                    el_2 = el;
                }
                if(freq == s_max){
                    if(el<el_2) el_2 = el;
                }
            }
        }
        return el_2;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements:\n";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    Solution sol;

    int result2 = sol.secondMostFrequentElement(nums);
    
    cout << "Second most frequent element is: " << result2 << endl;

    return 0;
}
