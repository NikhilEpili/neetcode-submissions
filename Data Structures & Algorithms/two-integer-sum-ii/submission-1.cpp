class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int lp=0;
        int rp=n-1;
        int sum=0;
        while(lp<rp){
            sum=nums[lp]+nums[rp];
            if(sum<target){
                lp++;
            }
            else if(sum>target){
                rp--;
            }else{
                return {lp+1,rp+1};
            }
        }
        return{}; 
    }
};
