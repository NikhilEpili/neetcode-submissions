class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> mp;

        // Count frequency
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        // Store {frequency, number}
        vector<pair<int, int>> freq;

        for(auto x : mp){
            freq.push_back({x.second, x.first});
        }

        // Sort by frequency
        sort(freq.rbegin(), freq.rend());

        vector<int> ans;

        // Take top k
        for(int i = 0; i < k; i++){
            ans.push_back(freq[i].second);
        }

        return ans;
    }
};