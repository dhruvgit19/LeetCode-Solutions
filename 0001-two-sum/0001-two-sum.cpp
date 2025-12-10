class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> target_indices;
        unordered_map<int, int> hash_table;

        for (int i = 0; i < nums.size(); i++) {
            int second_integer = target - nums[i];

            auto it = hash_table.find(second_integer);
            if (it != hash_table.end()) {
                target_indices.push_back(it->second);
                target_indices.push_back(i);
                return target_indices;
            }

            hash_table[nums[i]] = i;
        }

        return target_indices;
    }
};


    
