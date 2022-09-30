// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
  
class Solution {
public:
    void solve(int opening , int closing , vector<string>& v , string output)
    {
        if(opening==0 && closing==0)
        {
            v.push_back(output) ;
            return ;
        }
        
        if(opening != 0)
        {
            solve(opening-1 , closing , v, output+"(") ;
        }
        if(closing > opening)
        {
            solve(opening, closing-1 , v, output + ")") ;
        }
        return ;
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans ;
        string empty= "" ;
        solve(n, n , ans , empty) ;
        return ans ;
    }
};
