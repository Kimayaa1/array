class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int size = max(a.size(), b.size());
        for(int i=0; i<size; i++){
            if(a[i]!= b[i]){
                return 0;
            }
        }
        return 1;
        
    }

};
