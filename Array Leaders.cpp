class Solution {
  public:
    vector<int> leaders(int n, int arr[]) {
        int num = INT_MIN;
        vector<int> res;
        for(int i = n-1; i>=0; i--){
            num = max(num, arr[i]);
            if(num == arr[i]){
                res.push_back(num);
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
