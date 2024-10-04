class Solution {
  public:
    vector<int> twoRepeated (int arr[], int N) {
        vector <int> result;
        for(int i=0; i<N+2; i++){
            int index = abs(arr[i]);
            if(arr[index]>0){
                arr[index] = -arr[index];
            }
            else{
                result.push_back(index);
            }
        }
        return result;
    }
};
