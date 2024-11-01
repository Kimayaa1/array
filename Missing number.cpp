int missingNumber(int A[], int N)
{
    int sum = (N*(N+1))/2;
    int sum1 = 0;
    for(int i =0; i<N-1; i++){
        sum1 = sum1 + A[i];
    }
    return sum - sum1;
}
