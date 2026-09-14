class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> m;
        for(int i:nums){
            if(m.find(i)!=m.end()){
                return true;
            }else{
                m[i]=1;
            }
        }
        return false;
    }
};