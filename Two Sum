class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        int mid = s + (e-s)/2;
        vector<int> result;

        while(s<=e){
            if((nums[mid] + nums[mid+1]) == target){
                result.push_back(mid);
                result.push_back(mid + 1);
            }
            else if((nums[mid] + nums[mid-1]) == target){
                result.push_back(mid - 1);
                result.push_back(mid);
            }
            else if((nums[mid]+nums[mid+1]) > target){
                e = mid - 1; 
            }
            else if((nums[mid] + nums[mid-1]) < target){
                s = mid + 1;
            }
            else{
                continue;
            }
            mid = s + (e-s)/2;
        }
        return result;
    }
};
