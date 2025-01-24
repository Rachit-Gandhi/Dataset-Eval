#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++) {
            int comp = target-nums[i];
            if(mp.count(comp)) {
                return {mp[comp], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};