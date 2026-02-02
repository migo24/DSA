#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {

        unordered_map<int, int> hash;
        for(int i = 0; i < nums.size(); i++){
                hash[nums[i]]++;
            }

        int max_count = 0;
        int element = -1;

        for(auto it: hash){
            int num = it.first;
            int freq = it.second;

            if(max_count < freq){
                max_count = freq;
                element = num;
            }
            else if(max_count == freq){
                if(element > num) element = num;
            }
        }
        return element;
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
    int result = sol.mostFrequentElement(nums);

    cout << "Most frequent element is: " << result << endl;

    return 0;
}
