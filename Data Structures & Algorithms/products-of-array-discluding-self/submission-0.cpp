class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector <int> prefix(n,1);
        int prefixProd = 1;
        for(int i=0;i<n-1;i++){
            prefixProd*=nums[i];
            prefix[i+1]*=prefixProd;
        }
        int suffixProd = 1;
        for(int i=n-1;i>0;i--){
            suffixProd*=nums[i];
            prefix[i-1]*=suffixProd;
        }

        return prefix;
    }
};

// [1,1,2,8]
// [8,8,12,8]
