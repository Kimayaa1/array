class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        
        int sum = 0;
        int new_sum = 0;
        for(int i =0; i<n; i++){
            sum = sum + a[i];
        }
        for(int i=0; i<n; i++){
            sum -= a[i];
            if(new_sum == sum){
                return i+1;
            }
            new_sum += a[i]; 
        }
        return -1;
    }

};
