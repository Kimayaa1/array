class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int max_ele = arr[n-1];
        vector<int> res(n);
        res[n-1] = -1;
        for(int i =n-2; i>=0; i--){
            res[i] = max_ele;
            max_ele = max(max_ele, arr[i]);
        }
        return res;
        
    }
};
