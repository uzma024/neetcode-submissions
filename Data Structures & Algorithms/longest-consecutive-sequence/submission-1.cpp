class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,n=nums.size(),ans=0,curr =1;
        while(i<n){
            while(i+1<n && nums[i+1]==nums[i]){
                i++;
            }
            if(i+1<n && nums[i+1]==nums[i]+1){
                curr++;
                i++;
            }else{
                ans = max(ans,curr);
                curr=1;
                i++;
            }
        }
        // ans = max(ans,curr);
        return ans;
    }
};
