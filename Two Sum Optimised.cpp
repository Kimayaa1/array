class Solution {
public:
struct IndexedValue {
    int index;
    int value;
};
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int n = nums.size();
        vector<IndexedValue> indexedNums(n);
        for (int i = 0; i < n; ++i) {
            indexedNums[i].index = i;
            indexedNums[i].value = nums[i];
        }
        sort(indexedNums.begin(), indexedNums.end(), [](const IndexedValue& a, const IndexedValue& b) {
            return a.value < b.value;
        });

        int left = 0;
        int right = n - 1;

        while (left < right) {
            int currentSum = indexedNums[left].value + indexedNums[right].value;
            if (currentSum == target) {
                result.push_back(indexedNums[left].index);
                result.push_back(indexedNums[right].index);
                return result;
            } else if (currentSum < target) {
                ++left;
            } else {
                --right;
            }
        }
        return result;
    }
};
