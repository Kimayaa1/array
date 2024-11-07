#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int largestRowSum(int arr[][4], int n, int m){
    int maxi = INT_MIN;
    int rowIndex  = -1;
    for(int i =0; i<n; i++){
        int sum = 0;
        for(int j =0; j<m; j++){
            sum += arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = i;
        }
    }
    cout << "Maximum row sum is : " << maxi << endl;
    return rowIndex;
}

int main(){ 
    int arr[3][4];
    for(int i =0; i<3; i++){
        for(int j =0; j<4; j++){
            cin>> arr[i][j];
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n";

    int ans = largestRowSum(arr, 3, 4);
    cout << "Maximum Row sum is at index : " << ans << "\n";
    return 0;
    }
