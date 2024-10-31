// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
int firstRepeated(int arr[], int n) {
    int min = -1;
 
    // Creates an empty hashset
    set<int> myset;
 
    // Traverse the input array from right to left
    for (int i = n - 1; i >= 0; i--) {
        // If element is already in hash set, update min
        if (myset.find(arr[i]) != myset.end())
            min = i;
 
        else // Else add element to hash set
            myset.insert(arr[i]);
    }
 
    // Print the result
    if (min != -1)
        return min+1;
    else
        return -1;
}


};
