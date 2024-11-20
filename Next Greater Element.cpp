class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack <long long > stk;
        vector <long long > res;
        
        for (int i = n - 1; i >= 0; i--) {
            while (!stk.empty() && stk.top() <= arr[i])
                stk.pop();

            if (stk.empty())
                res.push_back(-1);
            else
                res.push_back(stk.top());

            stk.push(arr[i]);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
