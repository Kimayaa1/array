class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        long long sum=0;
        int left =0;
        for(int i=0;i<n;i++)
        {
            sum = sum+arr[i];
            while(sum> s && i>left)
            {
                sum = sum-arr[left];
                left = left+1;
            }
            if(sum == s)
            {
                return {left+1,i+1};
        
            }
        }
        
        return {-1};
    }
};
