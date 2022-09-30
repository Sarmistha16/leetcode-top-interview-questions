class Solution {
    vector<vector<int>> ans ;
public:
    
    void permute(vector<int> a, int l, int r)
{
    // Base case
    if (l == r)
    {
      // cout<<a<<endl;
        ans.push_back(a) ;
    } 
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {
 
            // Swapping done
            swap(a[l], a[i]);
 
            // Recursion called
            permute(a, l+1, r);
 
            //backtrack
            swap(a[l], a[i]);
        }
    }
}
    
    vector<vector<int>> permute(vector<int>& nums) {
         int n = nums.size() ;
         permute(nums, 0, n-1);
         return ans ;
    }
};
