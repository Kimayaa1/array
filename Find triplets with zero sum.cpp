class Solution{
  public:
    bool findTriplets(int arr[], int n)
{
    sort(arr, arr + n);

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;
        int x = arr[i];

        while (left < right) {
            if (x + arr[left] + arr[right] == 0) {
                return true;
            } else if (x + arr[left] + arr[right] < 0) {
                left++;
            } else {
                right--;
            }
        }
    }
    return false;
}

};
