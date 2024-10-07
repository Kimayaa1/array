class Solution
{
    public:
    int countOccurence(int arr[], int n, int k) {
        sort(arr, arr+n);
        int count = 0;
        int result = 0;
        for(int i =0; i<n-1; i++){
            if(arr[i] == arr[i+1]){
                if(count>(n/k)){
                    continue;
                }
                count++;
            }
            else{
                count =0;
            }
            if(count == (n/k)){
                result++;
            }
        }
        return result;
    }
};
