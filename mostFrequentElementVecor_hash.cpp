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

    int sumHighestAndLowestFrequency2(vector<int>& nums){
        unordered_map<int, int> hash;
        for(int i = 0; i< nums.size(); i++){
            hash[nums[i]]++;
        }
        int maxi = 0; int mini = nums.size();
        for(auto it: hash){
            maxi = max(maxi, freq);
            mini = min(mini, freq);
        }
        return maxi+mini;
    }

    int secondMostFrequentElement2(vector<int>& nums){
        unordered_map<int, int> hash = {0};

        for(int i = 0; i < nums.size(); i++){
            hash[nums[i]]++;
        }

        int el1 = -1;
        int el2 = -1;
        int count1 = 0;
        int count2 = 0;

        for(auto it: hash){
            int el = it.first;
            int count = it.second;
            if(count > count1){
                el2 = el1;
                count2 = count1;
                el1 = el;
                count1 = count;
            }
            else if(count < count1 && count > count2){
                el2 = el;
                count2 = count;
            }
            else if(count == count1 && el<el1){
                el1 = el;
            }
            else if(count == count2 && el<el2){
                el2 = el;
            }
        }
        
        return el2;

        //something is wrong
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
    int result22 = sol.secondMostFrequentElement2(nums);
    int result3 = sol.sumHighestAndLowestFrequency(nums);
    int result33 = sol.sumHighestAndLowestFrequency2(nums);

    cout << "Most frequent element is: " << result1 << endl;
    cout << "Second most frequent element is: " << result2 << endl;
    cout << "Second most frequent element is: " << result22 << endl;
    cout << "Sum of maximum and minimum freqencies is: " << result3 << endl;
    cout << "Sum of maximum and minimum freqencies is: " << result33 << endl;

    return 0;
}
