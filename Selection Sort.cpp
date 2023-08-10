#include<iostream>
using namespace std;

int selectionSort(int arr[], int n){
    int temp = 0;
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            else{
                continue;
            }
        }
    }
    cout<< "Sorted Array: " << endl;
    for(int i =0; i<n; i++){
        cout<< arr[i] << endl;
    }
}

int main(){

    int arr[5] = {45,12,60,9,30};
    cout<< selectionSort(arr, 5);
}
