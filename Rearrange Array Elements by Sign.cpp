class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive;
        vector<int> negative;
        vector<int> res;
        for(int i =0; i<nums.size(); i++){
            if(nums[i] > 0){
                positive.push_back(nums[i]);
            }
            else{
                negative.push_back(nums[i]);
            }
        }
        for(int i =0; i<nums.size()/2; i++){
            res.push_back(positive[i]);
            res.push_back(negative[i]);
        }
        return res;
        
    }
};
