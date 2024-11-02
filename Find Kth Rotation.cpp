//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    int count = 0;
	    for(int i = 0; i<n-1; i++){
	        if(arr[i]>arr[i+1]){
	            return i+1;
	        }
	    }
	    return 0;
	}

};
