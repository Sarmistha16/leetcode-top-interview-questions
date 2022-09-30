class Solution {
public:
    bool canJump(vector<int>& arr) {
        int n = arr.size() ;
        int reachable = 0 ;
        for(int i=0 ; i<n ; i++)
        {   
            if(reachable<i)
            {
                return false ;
            }
            reachable = max(reachable, i + arr[i]) ;
        }
        return true;  
    }
};
