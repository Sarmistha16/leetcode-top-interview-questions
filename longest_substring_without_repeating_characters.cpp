class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int count=1;
    int max_count=1;
    int j_start=0;
        if(s.size()==0)
            return 0;
    
    for(int i=1; i<s.size(); i++)
    {
        for(int j=j_start; j<i; j++)
        {
            if(s[i] != s[j])
                count++;
            else
                j_start = j+1;         
        }
        if(max_count < count)
            max_count = count;
        count = 1;
    }
    return max_count;
    }
};