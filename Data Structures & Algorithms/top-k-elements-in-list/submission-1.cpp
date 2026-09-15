class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector <vector<int>> freq(10001);

        int count[2001]={0};

        for(int i:nums){
            count[i+1000]++;
        }

        for(int i=0;i<2001;i++){
            freq[count[i]].push_back(i-1000);
        }
        vector<int> ans;
        int n=0,m=10000;

        while(n<k){
            for(int i=0;i<freq[m].size() && n<k;i++){
                ans.push_back(freq[m][i]);
                n++;
            }
            m--;
        }
        return ans;
    }
};
