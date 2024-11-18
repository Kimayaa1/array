// User function template for C++
class Solution {
  public:
    // Returns count buildings that can see sunlight
    int countBuildings(vector<int> &height) {
        int max_ele = height[0];
        int count = 1;
        for(int i =1; i<height.size(); i++){
            if(height[i] > max_ele){
                max_ele = max(max_ele, height[i]);
                count++;
            }
        }
        return count;
    }
};
