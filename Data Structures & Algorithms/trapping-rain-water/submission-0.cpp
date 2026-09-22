class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> prefMax(n,0),suffMax(n,0);

        for(int i=1;i<n;i++){
            prefMax[i] = max(prefMax[i-1],height[i-1]); 
        }

        for(int i=n-2;i>=0;i--){
            suffMax[i] = max(suffMax[i+1],height[i+1]); 
        }

        int water =0;
        // for(int i: prefMax){
        //     cout<<i<<",";
        // }
        // cout<<endl;
        // for(int j: suffMax){
        //     cout<<j<<",";
        // }
        // cout<<endl;

        for(int i=0;i<n;i++){
            water += max(min(prefMax[i],suffMax[i])- height[i],0);
        }
        return water;
    }
};
