class Solution {
public:
    void solve(int i , vector<vector<int>>& v , vector<int> output , vector<int> input )
    {
        if(i>= input.size())
        {
            v.push_back(output) ;
            return ;
        }
        vector<int> temp = output ;
        temp.push_back(input[i]) ;
        solve(i+1 , v, temp , input) ;
        solve(i+1 , v , output , input) ;
        return ;
    }
    
    vector<vector<int>> subsets(vector<int>& A) {
        
        vector<vector<int>> ans ;
        vector<int> output ;
        solve(0,ans, output , A  ) ;
        sort(ans.begin() , ans.end()) ;
        return ans; 
    }
};
