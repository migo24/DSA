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

    int sumHighestAndLowestFrequency(vector<int>& nums){
        unordered_map<int, int> hash;
        for(int i = 0; i < nums.size(); i++){
            hash[nums[i]]++;
        }

        int max = 1;
        for(auto it: hash){
            int freq = it.second;
            if(max<freq) max = freq;
        }
        int min = max;
        for(auto it: hash){
            int freq = it.second;
            if(min>freq) min = freq;
        }
        return min+max;
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
    int result1 = sol.mostFrequentElement(nums);
    int result2 = sol.secondMostFrequentElement(nums);
    int result3 = sol.sumHighestAndLowestFrequency(nums);

    cout << "Most frequent element is: " << result1 << endl;
    cout << "Second most frequent element is: " << result2 << endl;
    cout << "Sum of maximum and minimum freqencies is: " << result3 << endl;

    return 0;
}
