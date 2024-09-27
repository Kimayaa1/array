class Solution{
    public:
    int maxVal(int a[], int n) {
        
        int max = INT_MIN;
        int min = INT_MAX;
        for(int i =0; i<n; i++){
            if((a[i]-i) > max){
                max = a[i] - i;
            }
            if((a[i]-i) < min){
                min = a[i] - i;
            }
        }
        return max - min;

    }
};
