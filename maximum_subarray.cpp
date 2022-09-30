class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //the most important question for interview purpose 
        //KADANES ALGORITM
        int maxi=INT_MIN;
        // intialise the value with int min to store the max
        int sum=0;
        //sumwith 0
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            maxi=max(sum,maxi);
            if(sum<0)
            {
                sum=0;
            }
        }
        return maxi;
    }
};