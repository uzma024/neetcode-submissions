class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0, j=heights.size()-1;

        // int maxHeight = max_element(heights.begin(),heights.end());

        int ans = 0;
        while(i<j){
            int height = min(heights[i],heights[j]);
            ans = max(height*(j-i),ans);

            if(heights[i]<heights[j]){
                i++;
            }else{
                j--;
            }
        }
        return ans;
    }
};
