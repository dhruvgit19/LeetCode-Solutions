struct TrieNode {
    TrieNode* children[2];
    TrieNode() {
        children[0] = nullptr;
        children[1] = nullptr;
    }
};

class Solution {
private:
    TrieNode* root;

    void insert(int num) {
        TrieNode* curr = root;
        for (int i = 31; i >= 0; i--) {
            int bit = (num >> i) & 1;
            if (curr->children[bit] == nullptr) {
                curr->children[bit] = new TrieNode();
            }
            curr = curr->children[bit];
        }
    }

    int getMaxXOR(int num) {
        TrieNode* curr = root;
        int maxXOR = 0;
        for (int i = 31; i >= 0; i--) {
            int bit = (num >> i) & 1;
            int oppositeBit = 1 - bit; // The bit that gives 1 upon XORing

            if (curr->children[oppositeBit] != nullptr) {
                maxXOR |= (1 << i); // Set the i-th bit to 1
                curr = curr->children[oppositeBit];
            } else {
                curr = curr->children[bit];
            }
        }
        return maxXOR;
    }

public:
    int findMaximumXOR(vector<int>& nums) {
        root = new TrieNode();
        for (int num : nums) {
            insert(num);
        }

        int maxResult = 0;
        for (int num : nums) {
            maxResult = max(maxResult, getMaxXOR(num));
        }

        return maxResult;
    }
};