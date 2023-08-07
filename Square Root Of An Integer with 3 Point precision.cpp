#include<iostream>
using namespace std;

int BinarySearch( int arr[], int n,  int key){

    int s = 0;
    int e = n;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){

        int square = arr[mid] * arr[mid];

        if(square == key){
            return mid;
        }

        if(square<key){
            ans = mid;
            s = mid + 1;
        }

        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol){

    double factor = 1;
    double ans = tempSol;

    for(int i = 0; i<precision; i++){
        factor = factor/10;

        for(double j=ans; j*j < n; j=j+factor){
        ans = j;
    }
    }
    return ans;
    
}
int main(){

int n;
cout << " enter the no " << endl;
cin >> n;
int arr[8] = {1,3,5,6,16,19,24,60};

int tempSol = BinarySearch(arr, 8, n);
cout << " Answer is " << morePrecision(n, 3, tempSol) << endl;

}
